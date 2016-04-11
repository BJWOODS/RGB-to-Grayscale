//
//  ssd.c
//  C Proj
//
//  Created by Brandon Woodard on 2/15/16.
//  Copyright (c) 2016 Brandon Woodard. All rights reserved.
//  Class: CST337
//  Abstract: This project converts RGB values to grayscale values utilixing bitwise operators

#include <stdio.h>
#include <string.h>
#include <stdio.h>
#include <stdlib.h>
int main()
{
    unsigned int twopixels[] = {0xAA112233, 0xBB334455};
    int r,g,b,r2,g2,b2,avg,avg2;
    
    b=twopixels[0]& 0xFF; //Using 'and' operation to isolate red,green, and blue values
    twopixels[0]>>=8;     //Shifting 8 bits due to size of 2 hexadecimals to set up isolation of green val
    g=twopixels[0]& 0xFF;
    twopixels[0]>>=8;
    r=twopixels[0]& 0xFF;
    twopixels[0]>>=8;
    avg=(r+g+b)/3;
    printf("%x \n",avg);
    
    b2=twopixels[1]& 0xFF; //Using 'and' operation to isolate red,green, and blue values
    twopixels[1]>>=8;     //Shifting 8 bits due to size of 2 hexadecimals to set up isolation of green val
    g2=twopixels[1]& 0xFF;
    twopixels[1]>>=8;
    r2=twopixels[1]& 0xFF;
    twopixels[1]>>=8;
    avg2=(r2+g2+b2)/3;
    printf("%x %x \n",twopixels[1], avg2);
    
   
    twopixels[0]<<=8;    //Mirroring operations above to add the averages to grayscale hexadecimal
    twopixels[0] |= avg;
    twopixels[0]<<=8;
    twopixels[0] |= avg;
    twopixels[0]<<=8;
    twopixels[0] |= avg;
    

    twopixels[1]<<=8;
    twopixels[1] |=avg2;
    twopixels[1]<<=8;
    twopixels[1] |= avg2;
    twopixels[1]<<=8;
    twopixels[1] |= avg2;
    printf("%x %x",twopixels[0],twopixels[1]);
    
}

