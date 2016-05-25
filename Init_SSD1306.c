/*
 * File:   Init_SSD1306.c
 * Author: julienlopez
 *
 * Created on 18 May 2016, 5:31 PM
 */


#include <xc.h>
#include "header.h"


     unsigned char Sequence [22]={
    0xA8,
    0x3F,
    0xD3,
    0x00,
    0x40,
    0xA0,
    0xA1,
    0xC0,
    0xC8,
    0xDA,
    0x12,
    0x81,
    0x7F,
    0xA4,
    0xA6,
    0xD5,
    0x80,
    0x8D,
    0x14,
    0xAF,
    0x20,
    0x00,
     };
  
   

void Init_SSD1306() {
    
    for(int i=0;i<22;i++){
        Send_Command(0x78,0x00,Sequence[i]);
        
        
        
        
    }
    
    
    
    

}
