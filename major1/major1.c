#include "major1.h"

int main(){

    int input;      //this is for the input from menu 1-5
	unsigned int inputVal;  // the value that is entered by the user and passed to each bitwise function
    unsigned int number; //holds the input value that is being manipulated for each function
    

//MENU THAT TAKES IN USER INPUT
    do{ //i put a switch case inside a do while loop to check for '5' as input
        
        short isCorrect = 0;    //the "bool" for what is entered

        printf("Enter the menu option for the operation to perform:\n");    //this is the menu
        printf("%s %5s", "(1)", "Counting Leading Zeroes\n");
        printf("%s %5s", "(2)", "Endian Swap\n");
        printf("%s %5s", "(3)", "Rotate-right\n");
        printf("%s %5s", "(4)", "Parity\n");
        printf("%s %5s", "(5)", "EXIT\n");
        printf("--->");
        scanf("%d", &input);

        if((input<1) || (input>5) ){
            printf ("Error: Invalid Option. Please try again. \n");
        } //if statement for if an option asides 1-5 is inputted the error message will appear

        switch(input){  //start of the switch case to ask for input after a selection has been made
            case 1:{ //CLZ FUNCTION (count leading zeroes)
	            while(isCorrect == 0){
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%u", &inputVal);
            
                    if(inputVal >=1  && inputVal <= 4294967295){
                    isCorrect = 1; 
                    }
                }
	            number = inputVal;
                clz(number);    //i try to call function after input is made but it doesn't work (?)
                break;
            }
            case 2:{ //ENDIAN FUNCTION
                while(isCorrect == 0){
                    printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
                    scanf("%u", &inputVal);
            
                    if(inputVal >=1 && inputVal <= 4294967295){
                    isCorrect = 1; 
                    }
                }
	            number = inputVal;

                endian(number);
                break;
            }

            case 3:{ //ROTATE FUNCTION
                 
                while(isCorrect == 0){
		            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
		            scanf("%u", &inputVal);
		
                    if(inputVal >=1 && inputVal <= 4294967295){
                        isCorrect = 1; 
                    }
                }
	            number = inputVal;
                
                rotate(number);
                break;
            }

            
            case 4:{ //PARITY FUNCTION 
                while(isCorrect == 0){
		            printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
		            scanf("%u", &inputVal);
		
                    if(inputVal >=1 && inputVal <= 4294967295){
                        isCorrect = 1; 
                    }
                }
	            number = inputVal;
                parity(number);
                break;
            }

            
        } // for switch-case
        
        

    }while(input!=5);
    
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
    */
	return 0;
}
