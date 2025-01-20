# Controle de LEDs RGB e Buzzer com Push Button A

Este repositório foi criado para atendimento à atividade II (Participativa): Controle de pinos GPIO da ferramenta educacional BitDogLab.Implementa o controle de LEDs RGB e um buzzer utilizando o Push Button A da placa de desenvolvimento BitDogLab. 

## EQUIPE

- **Líder:** 
  - LUIRYS DO NASCIMENTO SILVA.
- **Desenvolvedores:**
  - CAMILLA MATOS ARAUJO;
  - FREDSON PEREIRA DE OLIVEIRA SANTOS;
  - JACKSON DA SILVA CARNEIRO;
  - LUIZ FILIPE RIBEIRO DE JESUS;
  - VITOR SOARES NASCIMENTO LEAL.

## Descrição

- **Microcontrolador**: Raspberry Pi Pico W (RP2040)
- **Componentes**:
  - LEDs RGB (Pinos:15, 16, 17)
  - Buzzer (Pino: 27)
  - Tecla Push Button A(Pino: 5)

## Funcionalidades

- Controle individual dos LEDs vermelho, verde e azul.
- Acionamento de todos os LEDs para exibir luz branca.
- Desligamento de todos os LEDs.
- Acionamento do buzzer por um período de 2 segundos.
- Interface de comando através de comunicação serial.

## Comandos Disponíveis

- `g`: Ligar o LED verde.
- `b`: Ligar o LED azul.
- `r`: Ligar o LED vermelho.
- `w`: Ligar todos os LEDs (luz branca).
- `o`: Desligar todos os LEDs.
- `z`: Acionar o buzzer.
- `q`: Sair do programa.

## Pré-requisitos

- Raspberry Pi Pico W (RP2040).
- Cabo USB para conexão ao computador.
- Configuração do ambiente de desenvolvimento com Pico SDK.
- Placa de Desenvolvimento BitDogLAb.
