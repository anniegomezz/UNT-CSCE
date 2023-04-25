#include "major1.h"
//#include <stdio.h>
//#include <stdlib.h>


/*
Name: Brenda Li
EUID: bml0171
Class: 3600
*/

void clz(unsigned int val){ 		//the function is of type void since it will not need to return any values
    unsigned int zeroes=0;			//group mate mentions we are using unsigned int so i will use unsigned
    unsigned int input32bit=32-1;	//instsructions mention 32 bit input 

    unsigned int msb = 1 << (input32bit);	//this sets the most significant bit to highest position (1 with 31 zeroes behind)
    short myBool = 0 ;    // bool for checking

    int i = 0;
    while(myBool == 0){

        if((msb&val<<i)){       //looks for leading bits
            myBool = 1;
            break;
        }
        zeroes = zeroes + 1;        //counts the zeroes
        i++;                        //increments

      }// when the leading bit does not match the msb 

/*
     for(int i=0;i<input32bit;i++){      //for loop for counting/traversing through each bit

        if ((msb & val<<i)){          //looks for the leading bit
            break;
        }

        zeroes = zeroes+ 1;              //counts the zeroes
    }
*/
    printf("The total number of leading zeroes in %u is %u \n", val, zeroes);   //prints out value

} 