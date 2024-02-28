// ** C program to determine if the year is leap-year or not.
#include <stdio.h>

int isLeapYear(int year)
{
  if ((year % 4 == 0 && year % 100 != 0) || (year % 400 == 0))
    return 1;
  else
    return 0;
}

int main()
{
  int year;

  printf("Enter a year: ");
  scanf("%d", &year);

  if (isLeapYear(year))
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}