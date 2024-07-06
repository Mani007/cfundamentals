#include <stdio.h>
int main() {
    int i = 10;
    float j = 20.10;
    void *ptr;
    ptr = &j;
    //printf("The value stored in void pointer is %d\n", *ptr);
    printf("The value stored in void pointer is %f\n", *( (float *)ptr) ); // dereference of void pointer using typecasting, also please pay attention to brackets. 
return 0;
}