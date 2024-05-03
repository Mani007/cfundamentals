#include <stdio.h>
int main() {
   
    //int i=0;
      
    // top:   // Declaring a label called top. This may create infinite loops.  create infinite loop
    // printf("We are inside goto statement.\n");
    //  goto end;
    // printf("We are inside INFINITE LOOP.\n");
    // goto top;
    // end:
    // printf("We have escaped out of goto loop.\n");
   for (int i = 0; i < 5; i++)
   {
    printf(" We are at first loop I index at %d\n",i);
    /* nested loop */
     for (int j = 0; j < 5; j++)
     {
      printf(" We are at nested loop J index at %d\n",j);
     
     if(j==2){
        goto endpart;
    } 
      }

   }
    endpart: 
    printf("We have escaped out of all the loop.\n");
   
   return 0;
}