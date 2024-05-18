

// C Program to print Array 
// of strings
#include <stdio.h>
 
// Driver code
int main()
{
  char arr[3][10] = {"Abc", 
                     "xyz", "pqr"};
  printf("String array Elements using character array are:\n");
   
  for (int i = 0; i < 3; i++) 
  {
    printf("%s\n", arr[i]);
  }

  char *arr1[] = {"aaa", "bbbb", "cccccc"};
  printf("String array Elements using charater pointer are are:\n");
   
  for (int i = 0; i < 3; i++) 
  {
    printf("%s\n", arr1[i]);
  }
  return 0;
}