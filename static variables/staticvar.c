// C Program to illustrate the static variable lifetime
#include <stdio.h>
 
// function with static variable
int fun()
{
    static int count = 0; // You always need to initialize the static variable
    count++;
    return count;
}
 
int main()
{
    printf(" %d\n", fun());
    printf(" %d\n", fun());
    printf(" %d\n", fun());
    printf(" %d\n", fun());
    return 0;
}