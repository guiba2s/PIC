/*  header para controle de LEDS RGB 
 
 
 */
#include <xc.h>

#ifndef RGB
#define RGB
//CORES PRIMÁRIAS
#define RED     1
#define GREEN   2
#define BLUE    4

//CORES SECUNDÁRIAS
#define YELLOW  (RED+GREEN) //soma do vermelho e verde
#define CYAN    (GREEN+BLUE)
#define PURPLE  (RED+BLUE)

//TODOS OS LEDS ACESSOS
#define WHITE   (RED+GREEN+BLUE)

//BOOLEAN VALORES
#define HIGH    1
#define LOW     0

//PINOS DO LED
#define RED_PIN     PORTBbits.RB0
#define GREEN_PIN   PORTBbits.RB1
#define BLUE_PIN    PORTBbits.RB2


#endif

// <editor-fold defaultstate="collapsed" desc="Funções da Biblioteca">

void rgbColor (int led)//controle da cor do RGB
{
    if(led & 1)//SE A CONDIÇÃO VERDADEIRA, O LED VERMELHO ACENDE NO PINO SETADO
    {
        RED_PIN = HIGH;
    }else{
        RED_PIN = LOW;
    }
      if(led & 2)//SE A CONDIÇÃO FOR VERDADEIRA O LED VERDE ACENDE O PINO SETADO
    {
        GREEN_PIN = HIGH;
    }else{
        GREEN_PIN = LOW;
    }
      if(led & 4)// SE A CONDILÇAO FOR VERDADEIRA O LED AZUL ACENDE O PINO SETADO
    {
        BLUE_PIN = HIGH;
    }else{
        BLUE_PIN = LOW;
    }
    
    
}

void turnOn(int led, unsigned char pin)//função apenas irá ligar o led na cor correspondente
{
    if(led & 1) 
    {
        PORTBbits.RB0 = HIGH;
    }
    if(led & 2)
    {
        //pin = HIGH;
    }
    if(led & 4)
    {
        //pin = HIGH;
    }
}


void turnOff(int led, int pin)//desligar leds
{
      if(led & 1)
    {
        pin = LOW;
    }
    if(led & 2)
    {
        pin = LOW;
    }
    if(led & 4)
    {
        pin = LOW;
    } 
}

void rgbInit()//configuraçãos dos pinos para uso de RGB
{
   //DADOS PODEM SER ALTERADOS CONFORME CONFIGURAÇÃO DO PIC
   //setar sentido dos pinos
    TRISBbits.TRISB0 = 0;
    TRISBbits.TRISB1 = 0;
    TRISBbits.TRISB2 = 0;
    
    PORTBbits.RB0 = 0;
    PORTBbits.RB1 = 0;
    PORTBbits.RB2 = 0;
}

// </editor-fold>
