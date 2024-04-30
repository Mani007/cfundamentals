#include <stdio.h>
int main() {
   
   int num;
  
    printf("Enter a number between (1 and 3) \n" );
    scanf("%d", &num);

    switch (num)
    {
    case 1:
        printf("Monday\n");
        break;
    case 2:
        printf("Tuesday\n");
        break;
    case 3:
        printf("Wednesday\n");
        break;
    
    default:
        printf("Invalid number\n");
        break;
    }
   
   
   return 0;
}
