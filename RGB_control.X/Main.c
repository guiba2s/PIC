// <editor-fold defaultstate="collapsed" desc="Cabeçalho">

/*
 * File:   Main.c
 * Author: Guilherme Lopes
 *
 * Created on 15 de Junho de 2020, 19:22
 */


// </editor-fold>//cabeçalho com dados sobre o projeto

// <editor-fold defaultstate="collapsed" desc="Includes">
//bibliotecas utilziadas no projeto
#include <xc.h>
#include "config_mcu.h"
#include "RGB.h"



// </editor-fold>//includes de bibliotecas que foram utilizadas

// <editor-fold defaultstate="collapsed" desc="Definições">

#define _XTAL_FREQ 8000000UL
#define ON  1
#define OFF 0



// </editor-fold>//#defines declaradas

// <editor-fold defaultstate="collapsed" desc="Váriaveis Globais">

// </editor-fold>//declaração de váriaveis globais 

// <editor-fold defaultstate="collapsed" desc="Funções">

void configMcu();
void rgbInit();//configuraçãos dos pinos para uso de RGB
void rgbColor (int led);//controle da cor do RGB
//void turnOff();


// </editor-fold>//funções que serão pré-compiladas

// <editor-fold defaultstate="collapsed" desc="Função Principal">

void main(void) {
    configMcu();
    rgbInit();
    
    while(1)
    {
        rgbColor(1);
        __delay_ms(1000);
    }
}

// </editor-fold>//função Main()

// <editor-fold defaultstate="collapsed" desc="Funções Auxiliares">
// </editor-fold>








