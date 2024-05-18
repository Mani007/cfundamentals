#include <stdio.h>
int arrprint(int array[]){
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("The value of elements of array at index %d is %d\n",i, array[i]);
    }
    array[3] = 10; // This will change the value in the main program
    return 0;
} 

int arrpointer(int* ptr){
    int i;
    for ( i = 0; i < 5; i++)
    {
        printf("The value of elements of array at index %d is %d\n",i, ptr[i]);
        printf("The value of elements of array at index + 1 %d is %d\n",i+1, *(ptr+1));
    }
    *(ptr+2) = 25; // This will change the value in the main program
    return 0;
}
int main() {
    int array[5] = {1,2,3,4,5};
    int* ptr = array;
    printf("The iteration starts here ---------------------------------\n");
    arrprint(array);
    printf("The iteration starts here ---------------------------------\n");
    arrprint(array);
    printf("The iteration starts here ---------------------------------\n");
    arrpointer(ptr);
    printf("The iteration starts here ---------------------------------\n");
    arrpointer(ptr);
    
return 0;
}