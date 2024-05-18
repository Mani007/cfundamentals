#include <stdio.h>
void printstr(char array[]){
    int i=0;  // initialization of i variable is required
    while (array[i] != '\0')
    {
        printf("using printscr function %c", array[i]);
        i++;
    }
    printf("\n");
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
    //char arr[] = {'a', 'b', 'c', 'd', 'e','\0'};
    //char arr[] = {"abcde"};  // "abcde" we do not need to provide \0 for terminations
    char arr[34];
    gets(arr);
    printf("using printf function %s\n", arr);
    printf("using puts function \n");
    puts(arr);

    printstr(arr);
return 0;
}