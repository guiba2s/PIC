/*
 * File:   Main.c
 * Author: Guilherme Lopes
 *
 * Created on 14 de Junho de 2020, 22:27
 * 
 * Descrição:
 *  Exemplo de controle de 2 motores DC de 5 a 12V utilizando uma Ponte_H 
 * microcontrolada com um PIC16F87
 * 
 *  */



#include <xc.h>
#define _XTAL_FREQ 8000000UL //definir a constante 8MHz com esse nome pois

//pinos
#define EN1 PORTBbits.RB0
#define IN1 PORTBbits.RB1
#define IN2 PORTBbits.RB2
#define LED PORTBbits.RB3

//status
#define ON 1
#define OFF 0

//sentido
#define DIR 0b110 //roda o motor para direita
#define ESQ 0b101 //roda o motor para a esquerda

void configMCU(); //CONFIG FUSES
void configPINS(); //CONFIG PINS
void motorControl(int status, int direction);
void bitStatus();//função para testar sequencia do algoritmo


void main(void) {
    
    configMCU();//configurar o MCU
    configPINS(); //configurar os pinos do MCU
    bitStatus(); //função para verificar inicialização do MCU
    
    while(1)
    {
       //  bitStatus(); //função para verificar inicialização do MCU
       motorControl(ON, DIR);
        
    }
    
    
    return;
}




void configMCU()
{

    #pragma config FOSC = LP        // Oscillator Selection bits (LP oscillator)
    #pragma config WDTE = OFF       // Watchdog Timer Enable bit (WDT disabled)
    #pragma config PWRTE = ON       // Power-up Timer Enable bit (PWRT enabled)
    #pragma config MCLRE = OFF      // RA5/MCLR/VPP Pin Function Select bit (RA5/MCLR/VPP pin function is digital I/O, MCLR internally tied to VDD)
    #pragma config BOREN = OFF      // Brown-out Reset Enable bit (BOR disabled)
    #pragma config LVP = OFF        // Low-Voltage Programming Enable bit (RB3 is digital I/O, HV on MCLR must be used for programming)
    #pragma config CPD = ON         // Data EE Memory Code Protection bit (Data EE memory code-protected)
    #pragma config WRT = ALL        // Flash Program Memory Write Enable bits (0000h to 0FFFh write-protected)
    #pragma config CCPMX = RB3      // CCP1 Pin Selection bit (CCP1 function on RB3)
    #pragma config CP = ON          // Flash Program Memory Code Protection bit (0000h to 0FFFh code-protected (all protected))

    // CONFIG2
    #pragma config FCMEN = OFF      // Fail-Safe Clock Monitor Enable bit (Fail-Safe Clock Monitor disabled)
    #pragma config IESO = OFF       // Internal External Switchover bit (Internal External Switchover mode disabled)

}

void configPINS()
{
    
    TRISBbits.TRISB0 = 0; //OUTPUT
    TRISBbits.TRISB1 = 0;
    TRISBbits.TRISB2 = 0;
    TRISBbits.TRISB3 = 0;
    
    PORTBbits.RB0 = 0; //LOW
    PORTBbits.RB1 = 0;
    PORTBbits.RB2 = 0;
    PORTBbits.RB3 = 0;
    
    
}

//metodo para controle de motor DC

void motorControl(int status, int direction){//recebe como dados status = on/off e sentido de rotacao
 
    if(status == ON && direction == DIR)
    {
        PORTB = DIR;
    }
    
    if(status == ON && direction == ESQ)
    {
        PORTB = ESQ;
    }

}

void bitStatus()//função para testar sequencia do algoritmo
{
    LED =~ LED;
    __delay_ms(1000);
}
