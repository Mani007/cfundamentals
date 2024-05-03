#include <stdio.h>
int main() {
   
   //int index;
   int i=0;
  
         
    // while loop to print 1 to 8
    top:   // Declaring a label called top. This may create infinite loops.  create infinite loop
    while (i < 8) {
        // when i = 4, the iteration will be skipped and for
        // will not be printed
        i++;
        if (i == 4) {
            continue;
        }
        printf("%d ", i);
    }
    goto top;
   
   
   return 0;
}