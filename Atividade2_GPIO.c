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
}
int main()
{
    stdio_init_all();

    while (true) {
        printf("Hello, world!\n");
        sleep_ms(1000);
    }
}
