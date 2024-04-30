#include <stdio.h>
int main() {
   
   int index=0, num;
  
    printf("Enter a number of time you want to repeat between 0 to 10 .... \n" );
    scanf("%d", &num);
    if (num>-1 && num<10) 
        {
    /* code */
             do {   
                    
                    printf("We are in DO ..while loop with index at %d,\n", index);
                    index++;
                    /* This loop will execute atleast once irrespective of conditions. To check put index 0 as per while condition its invalid. But loop will execute once */
                    
                } while (index < num);
    } else 
    {
            printf("You have entered INFINITE loop number \n");
    }
   
   return 0;
}