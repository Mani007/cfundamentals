#include <stdio.h>
#include <stdlib.h>
int* fun()
    {
    // x is local variable and goes out of
    // scope after an execution of fun() is
    // over.
    int x = 5;
 
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