#include <stdio.h>
int main() {
   
   int index=0, num;
  
    printf("Enter a number of time you want to repeat between 0 to 10 .... \n" );
    scanf("%d", &num);
    if (num>0 && num<10) 
        {
    /* code */
           for (index==0; index<num; index++)
          {
                    printf("We are in for loop with index at %d,\n", index);
                    //index++; Also written as index= index + 1  or index += 1
          }
           
                
    } else 
    {
            printf("You have entered INFINITE loop number \n");
    }
   
   return 0;
}