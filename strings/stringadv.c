#include <stdio.h>
void printstr(char array[]){
    int i=0;  // initialization of i variable is required
    while (array[i] != '\0')
    {
        printf("%c", array[i]);
        i++;
    }
    
}
int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e','\0'};
    printstr(arr);
return 0;
}