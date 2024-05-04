#include <stdio.h>
int main() {
    int num;
    printf("Please enter a number \n");
    scanf("%d", &num);
    printf("Multiplication Table for %d is \n ", num);
    for (int i = 1; i < 11; i++)
    {
        /* code */
        printf("%d * %d = %d \n", num, i, num*i);
    }
    
return 0;
}