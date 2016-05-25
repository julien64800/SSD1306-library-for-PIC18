/*
 * File:   filledrectangle.c
 * Author: julienlopez
 *
 * Created on 25 May 2016, 10:35 AM
 */


#include <xc.h>
#include "header.h"
#include "buffers.h"
void filledrectangle(uint8_t x,uint8_t y,uint8_t w,uint8_t h,uint8_t color) 
{
    if(h==0||w==0) return;
    uint8_t firstPage=y/8;
    uint8_t firstbit=y%8;
    uint8_t yEnd=y+h-1;
    if(yEnd>=63)
        yEnd=63-1;
        
    uint8_t lastPage=yEnd/8;
    uint8_t lastbit=7-yEnd%8;
    uint8_t xEnd=x+w-1;
    if(xEnd>=127)
            xEnd=127-1;
    
    for(uint8_t c=x;c<=xEnd;c++){
      if(color==WHITE){
          if(firstPage==lastPage){
              buffer[c+firstPage*128] |=(255<<firstbit&255>>lastbit);
          }else{
              buffer[c+firstPage*128] |=(255<<firstbit);
              buffer[c+firstPage*128] |=(255>>lastbit);
              for(uint8_t p=firstPage+1;p<lastPage;p++)
                  buffer[c+p*128]=255;
              
              
          
          }
      }else{
                    if(firstPage==lastPage){
              buffer[c+firstPage*128] &=~(255<<firstbit&255>>lastbit);
          }else{
              buffer[c+firstPage*128] &=~(255<<firstbit);
              buffer[c+firstPage*128] &=~(255>>lastbit);
              for(uint8_t p=firstPage+1;p<lastPage;p++)
                  buffer[c+p*128]=0;
          
          
          
      }  
        
        
        
    }
    
    
        
        
        
    }  
        
    }    
    

