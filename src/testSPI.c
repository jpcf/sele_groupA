#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <stdint.h>
#include "../include/lib_LCD_Nokia5110.h"
#include <xc.h>

#pragma config WDTE = OFF // This disables the watchdog timer!

void TIMER2config (unsigned char comparePer, unsigned char preload,
                   unsigned char presc, unsigned char postsc) {
    PR2    = comparePer;  
    TMR2   = preload; 
    T2CON |= postsc | (presc<<3); 
}

void CLOCKconfig() {
    OSCCON  = 0x6A; //Sets the internal oscillator fosc = 4 MHz
    OSCSTAT = 0x00;
    OSCTUNE = 0x00;
}

void main(void) {
    
    int    i  = 0;
    char str[30];
    unsigned char buf;
    
    CLOCKconfig();
    initLCD();
    configLCD();
    clearLCD();
    
    LATC1 = 1;
    __delay_ms(1000);
    
    printlnLCD("Screen Ok!", 10, 2);
   
    //__delay_ms(2000);
    //printImageLCD(IMG);
    
    while(1) {
    }
}
