/* Author:      Dahun Ju (DahunJu@my.unt.edu) 
   EUID: dj0251 (ID: 11476599)
 */

#include "major1.h"

void parity(unsigned int number){
	unsigned int count = 0;
	for(int i=31; i >=0; i--){ //unsigned int is  4 bytes so have 32 bits
		unsigned int temp = number >> i; 
		unsigned int bit = temp & 1; //get 32-i th bits, 0000 0110 & 0000 0001 -> 0000 0000, for 0000 0011 & 0000 0001 -> 0000 0001
		
		if(bit == 1){
			count++;
		}
	
    }
	
	//printf("%d has %d times of 1 in binary\n", number, count);//debug purpose
	if(count % 2 == 0){
		printf("Parity of %u is 0\n", number);
	}else{
		printf("Parity of %u is 1\n", number);
	}
	
	
}
/*

int main(){

	short isCorrect = 0;
	long input;
	while(isCorrect == 0){
		printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
		
		scanf("%ld", &input);
		if(input >=0 && input <= 4294967295){
			isCorrect = 1; 
		}
	}
	
	unsigned int number = input;
	
	parity(number);
	return 0;
	
} */