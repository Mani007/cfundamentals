#include <stdio.h>
#include <stdlib.h>


   int main()
{
    // creating a block
    int* ptr;
    {
        int a = 10;
        ptr = &a;
    }
 
    // ptr here becomes dangling pointer
    printf("%d", *ptr);
 
return 0;
}