/*
 * File:   mcu_config..c
 * Author: Guilherme Lopes
 *
 * Created on 14 de Junho de 2020, 22:29
 * Configuração dos periféricos do microcontrolador
 */



// PIC16F87 Configuration Bit Settings

// 'C' source line config statements

// CONFIG1
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

// #pragma config statements should precede project file includes.
// Use project enums instead of #define for ON and OFF.




