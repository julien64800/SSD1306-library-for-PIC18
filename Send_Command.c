/*
 * File:   Send_Command.c
 * Author: julienlopez
 *
 * Created on 18 May 2016, 5:30 PM
 */


#include <xc.h>
#include "header.h"
void Send_Command(uint8_t Address,uint8_t Continuation,uint8_t Command ) {
    
    
    SSP1CON2bits.SEN=1; // Start condition ON
    
while(SSP1CON2bits.SEN); // Wait for Start condition to be done
    PIR1bits.SSPIF = 0;
    SSP1BUF=Address; // Send the Address
    
    while(SSP1IF==0); // Wait for the ACK
   
    PIR1bits.SSPIF = 0;
   
    SSP1BUF=Continuation;    // Send the Command byte
    while(SSP1IF==0);    // Wait for the ACK
 
    PIR1bits.SSPIF = 0;
     SSP1BUF=Command;  // Send the data
    while(SSP1IF==0);// Wait for ACK
   
    PIR1bits.SSPIF = 0;
     SSP1CON2bits.PEN=1;//STOP
     while(SSP1CON2bits.PEN);//Wait for STOP condition to be done
    
    
    
    return;
}
