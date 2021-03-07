/*
 * File:   display7seg.c
 * Author: Pedro
 *
 * Created on 6 de Março de 2021, 15:00
 */


#include <xc.h>
#include "config.h"

char digitos[10] = {0x3F,0x06,0x5B,0x4F,0x66,0x6D,0x7D,0x07,0x7F,0x6F};

void disp7seg_init (void)
{
    
    ANSELH = 0;
    TRISB = 0x00;
    PORTB = 0x00;
    
}


void digitos7seg (unsigned char dig)
{
    PORTB = digitos[dig];
}