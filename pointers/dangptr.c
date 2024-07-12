#include <stdio.h>
#include <stdlib.h>
int* fun()
{
    // x now has scope throughout the program
    static int x = 5;
 
    return &x;
}

int main()
{
    int* p = fun();
    fflush(stdin);
 
    // p points to something which is not
    // valid anymore
    printf("%d", *p);
return 0;
}