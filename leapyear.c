#include <stdio.h>

int main ()
{
  //every year that is exactly divisible by 4 is a leap year
  //centurial years are not leap years, only if they are exactly divible by 400
  //centurial years that are divisible by 100 aren't leap years.
 
  int year;

  printf("enter a year\n");
  scanf("%d", &year);
  if (year %400 == 0)//example: 2000 is divisible by 400
    printf("%d is a leap year!", year);

  //not a leap year if divisible by 100 and not divisible by 400
  else if (year % 100 == 0)
    printf("%d is a leap year!", year);

  //perfectly divisible by four, so its a leap year

   else if(year % 4 == 0)//2016 isn't divisible by 400 neither 100, but is divisible by 4
    printf("%d is a leap year!", year);

  //all other year are not leap years
  else
    printf("%d is not a leap year!", year);


  return 0;

}

//leap years arrives after every four years
//leap year is a year having 366 days
//if the year have 355 days, its not a leap year
