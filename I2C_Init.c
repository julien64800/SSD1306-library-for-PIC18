/*
 * File:   I2C_Init.c
 * Author: julienlopez
 *
 * Created on 18 May 2016, 5:23 PM
 */


#include <xc.h>

void I2C_Init(void) {
    
    SSP1CON1=0b00101000;
    SSP1ADD=0x03;
    SSP1STAT=0x00;
    TRISC=0b11111111;
    
    return;
}
