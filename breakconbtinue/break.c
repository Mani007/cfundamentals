#include <stdio.h>
int main() {
   
   int index=0, num;
  
    printf("Enter a number of time you want to repeat between 0 to 10 .... \n" );
    scanf("%d", &num);
    if (num>0 && num<10) 
        {
    /* code */
            while (index < num) 
                {
                    printf("We are in while loop with index at %d,\n", index);
                    index++;
                    if (index==5)
                    {
                        printf("We are breaking out of the loop as index is 5 \n");
                        break;  // break statment is added
                    }
                    
                }
    } else 
    {
            printf("You have entered INFINITE loop number \n");
    }
   
   return 0;
}