/*
 * File:   main.c
 * Author: julienlopez
 *
 * Created on 18 May 2016, 5:24 PM
 */


#include <xc.h>
#include "header.h"
#include "buffers.h"
#include "font.h"
//#include "buffers.h"

uint8_t pixel [3]={
   0xff,
   0xff,
   0xff,
};
        
       
void main(void) {
    
    I2C_Init();
    Init_SSD1306();
    memset((void*)buffer,0,1024); // Clear the entire Buffer
    Delay(10);
 
   
    
    
  
    //Send_Data(0x78,font,254);
    //Delay(500);
    
    //testfilledrectangle();
    filledrectangle(0,0,50,50,WHITE);
    
   // Delay(10);

   // Send_Data(0x78,buffer,1024);
   // Delay(10);
    
    filledrectangle(60,0,50,50,WHITE);
    Send_Data(0x78,buffer,1024);
   // Delay(10);

   
}
