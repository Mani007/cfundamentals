#include <stdio.h>
int main() {
   
   //int index;
   int i=0;
  
         
    // while loop to print 1 to 8
    top:   // Declaring a label called top. This may create infinite loops.  create infinite loop
    printf("We are inside goto statement.\n");
    printf("We are inside INFINITE LOOP.\n");
   
    goto top;
   
   
   return 0;
}