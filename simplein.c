#include <stdio.h>

int main (){
  int p,n,count;
  float r,si;

  count = 1;

  while (count <= 3){
    printf("\nEnter value of p, n, and r\n");
    scanf("%d%d%f", &p, &n, &r);
    si = p * n * r / 100;
    printf("Simple interest = %f", si);

    count = count + 1;

  }
  return 0;
}

//p = principal
//n = Number of days between payments
