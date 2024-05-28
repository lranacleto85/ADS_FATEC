#include <stdio.h>

int main(void) {

  float n1,n2,n3,media;
  printf("\nnota 1: ");
  scanf("%f", &n1);
  printf("\nnota 2: ");
  scanf("%f", &n2);
  printf("\nnota 3: ");
  scanf("%f", &n3);
  media=(n1+n2+n3)/3;
  printf ("sua média é:  %.2f",media);
}