// ** C program to find the sum of digits of number n using a function Sum()
#include <stdio.h>

int Sum(int number)
{
  int sum = 0;

  while (number > 0)
  {
    sum += number % 10;
    number /= 10;
  }

  return sum;
}

int main()
{
  int n;

  printf("Enter a number: ");
  scanf("%d", &n);

  int result = Sum(n);
  printf("Sum of digits of %d is: %d\n", n, result);

  return 0;
}
