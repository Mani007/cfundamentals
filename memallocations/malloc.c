#include <stdio.h>
#include <stdlib.h>
int main() {
 // This pointer will hold the
    // base address of the block created
    int* ptr;
    int n, i;
 
    // Get the number of elements for the array
    printf("Enter number of elements:");
    scanf("%d",&n);
    printf("Entered number of elements: %d\n", n);
 
    // Dynamically allocate memory using malloc()
    ptr = (int*)malloc(n * sizeof(int));  // This is the dynamic memory allocation
 
    // Check if the memory has been successfully
    // allocated by malloc or not
    if (ptr == NULL) {
        printf("Memory not allocated.\n");
        exit(0);
    }
    else {
 
        // Memory has been successfully allocated
        printf("Memory successfully allocated using malloc.\n");
 
        // Get the elements of the array
        for (i = 0; i < n; ++i) {
            ptr[i] = i + 5;
        }
 
        // Print the elements of the array
        printf("\n The address of memory location of elemets of array in hex: \n");
        for (i = 0; i < n; ++i) {
            printf("%x, ", ptr[i]);
        }

        printf("\n The element of value in the dynamically allocated array is: \n");
        for (i = 0; i < n; ++i) {
            printf("%d, ", ptr[i] );
        }
    }
 
    return 0;
}