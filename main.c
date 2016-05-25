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


        
       
void main(void) {
    
    I2C_Init();
    Init_SSD1306();
    memset((void*)buffer,0,1024); // Clear the entire Buffer
    filledrectangle(0,0,50,50,WHITE); 
    filledrectangle(60,0,50,50,WHITE);
    Send_Data(0x78,buffer,1024);


   
}
