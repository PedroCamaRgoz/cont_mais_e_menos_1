/*
 * File:   botoes.c
 * Author: Pedro
 *
 * Created on 6 de Março de 2021, 15:00
 */


#include <xc.h>
#include "config.h"

#define BMAIS PORTDbits.RD2 // botao +
#define BMENOS PORTDbits.RD3 // botao -

unsigned char BC = 0;
unsigned char BD = 0;

void botao_init (void)
{
    TRISDbits.TRISD2 = 1; // pino b +1
    TRISDbits.TRISD3 = 1; // pino b -1
    
}

char botaomais(void)
{
    char aux;
    
    aux  = BMAIS && !BC;
    BC = BMAIS;
    return(aux);
    
}


char botaomenos (void)
{
    char aux;
   
    aux  =BMENOS && !BD;
    BD = BMENOS;
    return(aux);
    
}

