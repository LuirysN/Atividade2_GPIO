//TAREFA 2
//SUBGRUPO 7

#include <stdio.h>
#include "pico/stdlib.h"
#include "hardware/gpio.h"

//aqui estão definidos os pinos que serão utilizados nesta tarefa
#define GPIO_LED_R 13     //led vermelho
#define GPIO_LED_G 11    //led verde
#define GPIO_LED_B 12   //led azul
#define BUZZER_PIN 21  //buzzer_A
#define P_BUTTON_A 5  //push button_A

//aqui definimos a função de cada GPIO usado
void config_port_io(){
    gpio_init(GPIO_LED_R);
    gpio_set_dir(GPIO_LED_R, GPIO_OUT);
    gpio_init(GPIO_LED_G);
    gpio_set_dir(GPIO_LED_G, GPIO_OUT);
    gpio_init(GPIO_LED_B);
    gpio_set_dir(GPIO_LED_B, GPIO_OUT);
    gpio_init(BUZZER_PIN);
    gpio_set_dir(BUZZER_PIN, GPIO_OUT);
    gpio_init(P_BUTTON_A);
    gpio_set_dir(P_BUTTON_A, GPIO_IN);

    gpio_put(GPIO_LED_R, 0);
    gpio_put(GPIO_LED_G, 0);
    gpio_put(GPIO_LED_B, 0);
    gpio_put(BUZZER_PIN, 0);
}
//função para ligar/desligar os leds
void gpio_put_rgb(bool r, bool g, bool b) {
    gpio_put(GPIO_LED_R, r);
    gpio_put(GPIO_LED_G, g);
    gpio_put(GPIO_LED_B, b);
}

//função para acionar o buzzer
void aciona_buzzer(){
    gpio_put(BUZZER_PIN, 1); //liga o buzzer
    sleep_ms(2000);          //espera 2s
    gpio_put(BUZZER_PIN, 0); //desliga o buzzer
}

//menu
//função para exibir o menu
void display_menu(){
    
    printf("\nComando disponiveis:\n");
    printf("g - Ligar LED verde\n");
    printf("b - Ligar LED azul\n");
    printf("r - Ligar LED vermelho\n");
    printf("w - Ligar os 3 LEDs (branco)\n");
    printf("o - Desligar todos os LEDs\n");
    printf("z - Acionar o buzzer\n");
    printf("q - Sair do programa\n");

}

int main() {
    stdio_init_all(); //inicializa a comunicação serial
    config_port_io(); //configura os GPIOs

    while (1) {
        display_menu();
        char command = getchar(); // Lê o comando do usuário
        switch (command) {
            case 'g':
                gpio_put_rgb(0, 1, 0); // Liga LED verde
                break;
            case 'b':
                gpio_put_rgb(0, 0, 1); // Liga LED azul
                break;
            case 'r':
                gpio_put_rgb(1, 0, 0); // Liga LED vermelho
                break;
            case 'w':
                gpio_put_rgb(1, 1, 1); // Liga todos os LEDs (branco)
                break;
            case 'o':
                gpio_put_rgb(0, 0, 0); // Desliga todos os LEDs
                break;
            case 'z':
                aciona_buzzer(); // Aciona o buzzer
                break;
            case 'q':
                return 0; // Sai do programa
            default:
                printf("Comando inválido!\n");
                break;
        }
    }
}