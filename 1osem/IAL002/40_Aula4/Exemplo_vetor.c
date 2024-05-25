#include <stdbool.h>
#include <stdio.h>
#include <stdlib.h>

int main()
{
  int arrayExample[5], i;
  printf("Inform us 5 numbers below\n");
  for (i=0;i<(sizeof arrayExample / sizeof arrayExample[0]);i++) 
  {
    scanf("%d", &arrayExample[i]);
  }
  printf("The result is:\n");
  for (i=0;i<(sizeof arrayExample / sizeof arrayExample[0]);i++) 
  {
    printf("%d \n", arrayExample[i]); 
  }

  return EXIT_SUCCESS;
}
