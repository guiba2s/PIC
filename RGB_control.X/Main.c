// <editor-fold defaultstate="collapsed" desc="Cabe�alho">

/*
 * File:   Main.c
 * Author: Guilherme Lopes
 *
 * Created on 15 de Junho de 2020, 19:22
 */


// </editor-fold>//cabe�alho com dados sobre o projeto

// <editor-fold defaultstate="collapsed" desc="Includes">
//bibliotecas utilziadas no projeto
#include <xc.h>
#include "config_mcu.h"
#include "RGB.h"



// </editor-fold>//includes de bibliotecas que foram utilizadas

// <editor-fold defaultstate="collapsed" desc="Defini��es">

#define _XTAL_FREQ 8000000UL
#define ON  1
#define OFF 0



// </editor-fold>//#defines declaradas

// <editor-fold defaultstate="collapsed" desc="V�riaveis Globais">

// </editor-fold>//declara��o de v�riaveis globais 

// <editor-fold defaultstate="collapsed" desc="Fun��es">

void configMcu();
void rgbInit();//configura��os dos pinos para uso de RGB
void rgbColor (int led);//controle da cor do RGB
//void turnOff();


// </editor-fold>//fun��es que ser�o pr�-compiladas

// <editor-fold defaultstate="collapsed" desc="Fun��o Principal">

void main(void) {
    configMcu();
    rgbInit();
    
    while(1)
    {
        rgbColor(1);
        __delay_ms(1000);
    }
}

// </editor-fold>//fun��o Main()

// <editor-fold defaultstate="collapsed" desc="Fun��es Auxiliares">
// </editor-fold>








