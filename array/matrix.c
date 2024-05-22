int main(int argc, char const *argv[])
{
    int a[3][3] = {{1,2,3},
                   {4,5,6},
                   {7,8,9} };
    int *p;
    p= a;
    printf("Address of pointer p to array a[0][0] is %x\n",p); // address of initial value of array pointer
    printf(" value of pointer *p to array a[0][0] is %d\n",*(p)); // 0
    printf(" value of array a[0][0] is %d\n",a[0][0]);  // 0
    // printf("Address of pointer p to array a[1] is %x\n",p+1);
    // printf("Second value of pointer *(p+1) to array a is %d\n",*(p+1)); // 1
    // printf("second value of array a is %d\n",a[1]);  // 1
    // printf("Address of pointer p to array a[2] is %x\n",p+2);
    // printf("Second value of pointer *(p+2) to array a is %d\n",*(p+2)); // 2
    // printf("second value of array a is %d\n",a[2]);  // 2
    printf("Address of array a is %x\n", a);
    for (int i=0;i<3;i++){
        for (int j = 0; j<3; j++)
        {
            printf("Address of pointer p to array a[%d][%d] is %x\n",i,j,p+i+j); // address of initial value of array pointer
            printf(" value of pointer *p to array a[%d][%d] is %d\n",i,j, *(*(p + i) + j)
            ); // We need the actual address of the array a instead of pointer p. 
            printf(" value of array with index is a[%d][%d] is %d\n",i,j,a[i][j]);  // 0
        }
        

    }


    return 0;
}
