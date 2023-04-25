#include "major1.h"
#define INT_BITS 32
 
void rotate(unsigned int a)
{
  
  int p; //second variable needed for function
  int result; //holds result of rotation

  printf("\nEnter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
  scanf("%d", &p);

  //rotation function
  result = (a >> p)|(a << (INT_BITS - p));

  printf("\n%d rotated by %d position gives: ", a, p);
  printf("%u\n", result);
  getchar();

}


//Main function used to test rotation
 
// int main()
// {
//   int a;
//   int p;

//   printf("Enter a 32-bit number (>= 1 and <= 4294967295, inclusively): ");
//   scanf("%d", &a);

//   printf("\nEnter the number of positions to rotate-right the input (between 0 and 31, inclusively): ");
//   scanf("%d", &p);

//   printf("\n%d rotated by %d position gives: ", a, p);
//   printf("%u", rightRotate(a, p));
//   getchar();
// }
