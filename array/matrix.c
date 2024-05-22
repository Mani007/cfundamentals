int main(int argc, char const *argv[])
{
    int a[5] = {0,1,2,3,4};
    int *p;
    p= a;
    printf("Address of pointer p to array a[0] is %x\n",p); // address of initial value of array pointer
    printf("First value of pointer *p to array a is %d\n",*p); // 0
    printf("First value of array a is %d\n",a[0]);  // 0
    printf("Address of pointer p to array a[1] is %x\n",p+1);
    printf("Second value of pointer *(p+1) to array a is %d\n",*(p+1)); // 1
    printf("second value of array a is %d\n",a[1]);  // 1
    printf("Address of pointer p to array a[2] is %x\n",p+2);
    printf("Second value of pointer *(p+2) to array a is %d\n",*(p+2)); // 2
    printf("second value of array a is %d\n",a[2]);  // 2

    return 0;
}
