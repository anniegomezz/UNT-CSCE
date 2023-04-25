#include "major1.h"

/*
    Name: Annie Gomez
    ID: 11458806
    EUID: alg0427
    COURSE: CSCE 3600 - MAJOR 1 ASSIGNMENT
*/

void endian(unsigned int input){
    //ordered msb to lsb as B3,B2,B1,B0
    unsigned int byte3; //holds most significant byte
    unsigned int byte2; //holds second most significant byte
    unsigned int byte1; //holds second least significant byte
    unsigned int byte0; //holds least significant byte

    //reorder as B0,B1,B2,B3    
    byte0 = ((input>>24)&0xff); // moves byte 3 to byte 0
    byte1 = ((input<<8)&0xff0000); // moves byte 1 to byte 2
    byte2 = ((input>>8)&0xff00); // moves byte 2 to byte 1
    byte3 = ((input<<24)&0xff000000); // bytes 0 to byte 3
    unsigned int swapped; //holds new endian swapped unsigned int

    swapped = (byte0 | byte1 | byte2 | byte3); //concatenate all bytes together to form opposite endian and store in result variable

    
    unsigned int inp = input; //holds value passed into function
    //unsigned int initial; //used to test unsigned integer before the swap
    unsigned int result; //holds result of the endian swap
    //holds result of endian swap after taking in input variable
    result = swapped;

    //print unsigned int before endian swap
    // printf("value of a = 0x%x \n", inp);
    //print unsigned int after endian swap
    printf("Endian swap of %u gives %u\n", inp, result);
    // printf("SHOULD OUTPUT: 16777216 GIVEN 1\n");
}

// int main(){
//     unsigned int inp;
//     //unsigned int initial; //used to test unsigned integer before the swap

//     unsigned int result;
//     printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): \n");
//     scanf("%u", &inp);
//     result = endian(inp);

//     //print unsigned int before endian swap
//     // printf("value of a = 0x%x \n", inp);

//     //print unsigned int after endian swap
//     printf("Endian swap of %u gives %u\n", inp, result);
//     // printf("SHOULD OUTPUT: 16777216 GIVEN 1\n");
// return 0;
// }


