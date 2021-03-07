/*
 * File:   main.c
 * Author: Pedro
 *
 * Created on 5 de Março de 2021, 20:00
 */


#include <xc.h>
#include "config.h"
#include "delay.h"
#include "botoes.h" 
#include "display7seg.h"


void main(void)
{
    
    ordem cont  = 0;
    
    botao_init();
    disp7seg_init();
      
    while(1)
    {
        
        digitos7seg(cont);
        
        if(botaomais() )cont = cont==9? 0 : cont +1; 
        if(botaomenos())cont = cont==0? 9 : cont -1;            
    
    }
    
}   

