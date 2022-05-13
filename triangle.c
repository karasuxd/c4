#include <stdio.h>

int main (void){
  int s1, s2, s3, soma;
  printf("enter the first side of the triangle\n");
  scanf("%d", &s1);
  printf("enter the second side\n");
  scanf("%d", &s2);
  printf("enter the third side\n");
  scanf("%d", &s3);
  soma = s1 + s2;

  if (soma > s3)
  {
    printf("the triangle is valid!");
  }
  else
  {
    printf("not valid!");
  }
      

}
