/*
Authors: José Pedro Fonseca, Carlos Ferreira, 2015
University of Porto, Portugal
*/

#ifndef PIC18F125CONFIGS_H
#define	PIC18F125CONFIGS_H

/* #pragma config statements should precede project file includes.*/
/* Use project enums instead of #define for ON and OFF.*/

/* CONFIG1 */
#pragma config FOSC = INTOSC    /* Oscillator Selection (INTOSC oscillator: I/O function on CLKIN pin) */
#pragma config WDTE = OFF       /* Watchdog Timer Enable (WDT disabled) */
#pragma config PWRTE = OFF      /* Power-up Timer Enable (PWRT disabled) */
#pragma config MCLRE = ON       /* MCLR Pin Function Select (MCLR/VPP pin function is MCLR) */
#pragma config CP = OFF         /* Flash Program Memory Code Protection (Program memory code protection is disabled) */
#pragma config CPD = OFF        /* Data Memory Code Protection (Data memory code protection is disabled) */
#pragma config BOREN = ON       /* Brown-out Reset Enable (Brown-out Reset enabled) */
#pragma config CLKOUTEN = OFF   /* Clock Out Enable (CLKOUT function is disabled. I/O or oscillator function on the CLKOUT pin) */
#pragma config IESO = ON        /* Internal/External Switchover (Internal/External Switchover mode is enabled) */
#pragma config FCMEN = ON       /* Fail-Safe Clock Monitor Enable (Fail-Safe Clock Monitor is enabled) */

/* CONFIG2 */
#pragma config WRT = OFF        /* Flash Memory Self-Write Protection (Write protection off) */
#pragma config PLLEN = OFF      /* PLL Enable (4x PLL disabled) */
#pragma config STVREN = ON      /* Stack Overflow/Underflow Reset Enable (Stack Overflow or Underflow will cause a Reset) */
#pragma config BORV = LO        /* Brown-out Reset Voltage Selection (Brown-out Reset Voltage (Vbor), low trip point selected.) */
#pragma config LVP = ON         /* Low-Voltage Programming Enable (Low-voltage programming enabled) */

/* The following macro is necessary for the xc8 compiler delay macros correct functioning */
#define _XTAL_FREQ 16000000

#endif	/* PIC18F125CONFIGS_H */

