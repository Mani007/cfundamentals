#include <stdio.h>
#define PI 3.14
int main() {
    int radius;
    printf("Enter the radius of the circle: \n");
    scanf("%d", &radius);
    double area = PI * radius * radius;
    printf("The area of the circle is: %.2lf\n", area);
return 0;
}