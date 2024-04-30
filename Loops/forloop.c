#include <stdio.h>
int main() {
   
   int index=0, j=0, num;
  
    printf("Enter a number of time you want to repeat between 0 to 10 .... \n" );
    scanf("%d", &num);
    if (num>0 && num<10) 
        {
    //intial condition is optional if declared and assigned value above
           for (; index<num, j<5; j++) // conditional expression can be multiple statements with zero or non zero values. 
          {
                    printf("We are in for loop with index at %d,\n", index);
                    //index++; Also written as index= index + 1  or index += 1
                    // expression 3 in for loop is optional and can be declared in side the for loop. 
          }
           
                
    } else 
    {
            printf("You have entered INFINITE loop number \n");
    }
   
   return 0;
}