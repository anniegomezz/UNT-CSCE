Assignment: MAJOR 1
Group 7 - Brenda Li, Annie Gomez, Mudiaga Ejayeriese, Dahun Ju
Course: CSCE 3600 Section 002


--------------------
Organization of the Project:

    Here are each of the files we were assigned to.

    major1.c, major1.h, README.md - ALL MEMBERS
    clz.c - BRENDA LI
    endian.c, Makefile - ANNIE GOMEZ
    rotate.c - MUDIAGA EJAYERIESE
    parity.c - DAHUN JU


--------------------

Special Compiling Instructions:

    Since we implemented a Makefile, these are the instructions used in order to run our code
    (Type all instructions without single quotes)

    １. type 'make' in order to compile all files.
    2. type './output' in order to run our code.
    3. type 'make clean' after running in order to remove output files.

--------------------

Additional Information:

    Our teammate Mudiaga was not able to connect to the gitlab and therefore could not commit/push/pull, so Annie pushed his file (rotate) for him.

--------------------
Known Bugs or Problems:

    There are no errors or warnings. We checked our code using the -Wall switch to show all warnings and there were none.


FILES INCLUDED AND DSECRIPTIONS:

major1.h - All team members
    Includes the declarations of each different bitwise function.

--------------------
major1.c - All team members

    I decided to use a do while loop to display the menu. For the incorrect submission, it uses an if statement to display that the input is incorrect and for the user to add the right input. It also uses a switch case to call to the function for the operation the user wants to perform. It will exit if the user types in '5'.

--------------------

clz.c - Brenda Li
1 -- Counting Leading Zeroes

    For the counting leading zero, I decided to use a "bool" value for my while loop. Since there is no bool in C language, I used an int and set it as 0 or 1. 0 for false being that it is not msb & var << i. If it is, it'll break out of the loop. It increments and counts the leading zeros. 

--------------------

endian.c - Annie Gomez
2 -- Endian Swap

    This function swaps the "endianness", aka the order in which a sequence of bytes stored in computer memory. This function first starts by storing all the bytes of the unsigned integer passed into the function into 4 separate variables that represent each of the 4 total bytes in the number. Then, it reassigns to bytes so that byte 3 and byte 0 swap and byte 2 and byte 1 swap. Then it concatenates each variable into a final "swapped" variable that will output it in the now swapped endian form.

--------------------

rotate.c - Mudiaga Ejayeriese
3 -- Rotate-Right

    In this code, we are doing bit rotation and in order to use this I had to include "#define INT_BITS 32" to be able to perform the bit rotation. We are doing right rotation, and in this type of rotation, the bits that fall off at the right end are put back at the left end. In the code, the user is asked to enter a 32-bit number within a certain range and the number of positions to rotate-right the input. And based on which of the conditions it meets in the rightrotate function will determine the output that will be given.

--------------------

parity.c - Dahun Ju
4 -- Parity
    This function simply computes the parity computation for the passed integer. It outputs either 0 or 1 respectively if the parity of the input number is even (0) or odd (1).

--------------------