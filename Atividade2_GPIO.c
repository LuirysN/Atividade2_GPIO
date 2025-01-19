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
void gpio_put_rgb(bool r, bool g, bool b) {
    gpio_put(GPIO_LED_R, r);
    gpio_put(GPIO_LED_G, g);
    gpio_put(GPIO_LED_B, b);
}

//função para acionar o buzzer
void aciona_buzzer(){
    gpio_put(BUZZER_PIN, 1);
    sleep_ms(2000);
    gpio_put(BUZZER_PIN, 0);
}
int main()
{
    stdio_init_all();
    config_port_io();
   
}
