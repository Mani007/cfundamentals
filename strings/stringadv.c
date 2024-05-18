#include <stdio.h>
void printstr(char array[]){
    int i=0;  // initialization of i variable is required
    while (array[i] != '\0')
    {
        printf("%c", array[i]);
        i++;
    }
    
}

void ptrstr(char array[]){
    char *i;
    i = array;  // initialization of i variable is required
    while (*i != '\0')
    {
        printf("%c", *i);
        i++;
    }
    
}
int main() {
    char arr[] = {'a', 'b', 'c', 'd', 'e','\0'};
    ptrstr(arr);
return 0;
}