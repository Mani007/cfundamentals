#include <stdio.h>
int main() {
   // printf() displays the string inside quotation
   // variables and data types in C
   int num;
   //float num1 = 10.11;
   //printf("Hello, World! %d", num);
//    printf("Value of int is %d and value of float is %-18.7f  this offset space\n", num, num1);
printf("Enter a number \n" );
scanf("%d", &num);

   if (num%5 == 0)
   {
    printf("The value is multiple of 5x \n");
    /* code */
    if (num == 25){

    printf("The value is 25 \n");
    }
   } else if (num == 15){
    printf("The number is 15");
   } else {

    printf("The number is not 25 or 15");
   }
   
   return 0;
}
