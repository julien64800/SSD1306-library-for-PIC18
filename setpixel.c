/*
 * File:   setpixel.c
 * Author: julienlopez
 *
 * Created on 18 May 2016, 6:33 PM
 */


#include <xc.h>
#include "header.h"
#include "buffers.h"




void setpixel(uint8_t x,uint8_t y,uint8_t color){
    
    if(color==WHITE)
       buffer[x+(y/8)*128] |=(1 << (y&7));
    
       else
       
        buffer[x+(y/8)*128] &=~(1 << (y&7));
        
       
    
    
}

