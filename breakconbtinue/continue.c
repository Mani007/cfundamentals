#include <stdio.h>
int main() {
   
   //int index;
   
    //printf("Enter a number of time you want to repeat between 0 to 10 .... \n" );
    //scanf("%d", &i);
   //index=0;
   
    int i = 0;
    // while loop to print 1 to 8
    while (i < 8) {
        // when i = 4, the iteration will be skipped and for
        // will not be printed
        i++;
        if (i == 4) {
            printf("Skipping to next iterations \n");
            continue;  // skip to next iteration 
        }
        printf("%d \n ", i);
    }
    
   
   
   return 0;
}