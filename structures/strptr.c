#include <stdio.h>
typedef struct Point { 
    int x, y; 
} point; 
int main() {
    point p ={0,0}; 
    printf("Point P is now x:%d  y:%d \n", p.x, p.y);
    point *ptr;
    // using pointer Type1
    ptr = &p;
    (*ptr).x = 10;
    (*ptr).y = 10;
    printf("Point P is now using (*ptr).x, is x:%d  and (*ptr).y is y:%d  \n", (*ptr).x, (*ptr).y);
    // using pointer Type2
    ptr->x = 20;
    ptr->y = 20;
    printf("Point P is now using ptr->x is x:%d  and ptr->x, ptr->y is y:%d is \n", ptr->x, ptr->y);
    
return 0;
}