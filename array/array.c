#include <stdio.h>
int main() {
    int i;
    int marks[4];
    marks[0]=43;
    printf("Marks of student zero is %d\n", marks[0]);
    // marks[0]=63;
    // marks[1]=34;
    // marks[2]=56;
    // marks[3]=78;
    for ( i = 0; i < 4; i++)
    {
        scanf("%d", &marks[i]);
    }
    
    for ( i = 0; i < 4; i++)
    {
        printf("Marks of student %d is %d\n", i, marks[i]);
    }
    
   // printf("Marks of student zero NOW is %d\n", marks[0]);
return 0;
}