#include <stdio.h>
int main(){
  int a;
  printf("enter a year\n");
  scanf("%d", &a);
  (a % 4 == 0 && a % 100 != 0) ? printf("leap year!") : (a % 400 == 0) ? printf("Leap year!") : printf("Common year!");

  return 0;

}
