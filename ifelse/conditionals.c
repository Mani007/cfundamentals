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

   if (num == 25)
   {
    /* code */
    printf("The value is true");
   } else {
    printf("The number is not 25");
   }
   
   return 0;
}
