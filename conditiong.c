#include <stdio.h>
int main (){
int i, b;
printf("enter a number\n");
scanf("%d", &i);
printf("enter another number\n");
scanf("%d", &b);

 i > b ? printf("%d is greater than %d\n", i, b) : printf("%d is greater than %d\n", b, i);
 if (i == b)
   printf("they are just equal");
  return 0;
}


