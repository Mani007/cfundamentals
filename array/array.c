#include <stdio.h>
int main() {
    int i,j;
    int marks[2][4] = {{25,56,67,77},
                    {45,89,66,54}}; //declaration with initialization marks
    // marks[0]=63;
    // marks[1]=34;
    // marks[2]=56;
    // marks[3]=78;
    // for ( i = 0; i < 4; i++)
    // {
    //     scanf("%d", &marks[i]);
    // }
    
    for ( i = 0; i < 2; i++)
    {
        //printf("Marks of student %d is %d\n", i, marks[i]);
        for ( j = 0; j < 4; j++)
        {
            printf("Marks of subject [%d] [%d] is %d\n",i, j, marks[i][j]);
        }
        
    }
    
   // printf("Marks of student zero NOW is %d\n", marks[0]);
return 0;
}