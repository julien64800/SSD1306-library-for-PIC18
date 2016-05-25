/*
 * File:   Delay.c
 * Author: julienlopez
 *
 * Created on 19 May 2016, 8:58 PM
 */


#include <xc.h>
#include "header.h"
void Delay(uint16_t time) {
    
    for(uint16_t i=0;i<time;i++){
        
        __delay_ms(1);
        
        
        
        
    }
    
    
    
    return;
}
