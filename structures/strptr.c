#include <stdio.h>
typedef struct point { // Be specific how you name the struct prefer small letters 
    int x, y, z; 
    struct point *next; 
} Points; 
int main() {
    Points p ={0,0,0, NULL};  // be specific how you name the struct prefer small letters
    Points q ={5,5,5,NULL}; 
    
    printf("Point P is now x:%d  y:%d and z:%d \n", p.x, p.y,p.z);
    Points *ptr;
    ptr = &p;
    ptr->next = &q;
    printf("Point Q address is %x   \n", ptr->next);
    printf("Point Q NEXT address is %x   \n", &q);
    //printf( "%d\n",ptr->next->x);
    // using pointer Type1
    (*ptr).x = 10;
    (*ptr).y = 10;
    (*ptr).z = 10;
    printf("Point P is now using (*ptr).x, is x:%d  and (*ptr).y is y:%d and (*ptr).y is yz:%d  \n", (*ptr).x, (*ptr).y, (*ptr).z);
    // using pointer Type2
    ptr->x = 20;
    ptr->y = 20;
    ptr->z = 20;
    printf("Point P is now using ptr->x is x:%d  and ptr->y is y:%d ptr->z is z:%d is \n", ptr->x, ptr->y, ptr->z);
    printf("Point Q is now using ptr->next->x is x:%d  and ptr->next->y is y:%d ptr->next->z is z:%d is \n", ptr->next->x, ptr->y, ptr->z);
    
return 0;
}