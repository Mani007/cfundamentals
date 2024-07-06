#include <stdio.h>
int main() {
    int i = 10;
    int j = 20;
    void *ptr;
    ptr = &i;
    //printf("The value stored in void pointer is %d\n", *ptr);
    printf("The value stored in void pointer is %d\n", *( (int *)ptr) ); // dereference of void pointer using typecasting, also please pay attention to brackets. 
return 0;
}