#include <stdio.h>
int main() {
   
   int i;
   int num;
  
    printf("Enter a number of time you want to repeat between 0 to 10 .... \n" );
    scanf("%d", &num);
   i=0;
    /* code */
            while (i < num) // make sure to check the while condition
                {
                    
                    printf("We are in while loop with index at %d,\n", i);
                    if (i>5)
                    {
                     printf("We are breaking the loop here and below lines will not be executed ");
                     continue;     
                     printf("After continue statement %d,\n", i);
                    }
                    i++;
                    
                    printf("After if statement %d,\n", i);
                                  
                 }
   
   
   return 0;
}