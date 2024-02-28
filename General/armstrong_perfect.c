// C program to check Armstrong and Perfect numbers using the function.
#include <stdio.h>
#include <math.h>

int isArmstrong(int number)
{
  int originalNumber, remainder, result = 0, n = 0;
  originalNumber = number;

  while (originalNumber != 0)
  {
    originalNumber /= 10;
    ++n;
  }
  originalNumber = number;

  while (originalNumber != 0)
  {
    remainder = originalNumber % 10;
    result += pow(remainder, n);
    originalNumber /= 10;
  }

  if (result == number)
    return 1;
  else
    return 0;
}

int isPerfect(int number)
{
  int sum = 0;

  for (int i = 1; i <= number / 2; i++)
  {
    if (number % i == 0)
    {
      sum += i;
    }
  }

  if (sum == number)
    return 1;
  else
    return 0;
}

int main()
{
  int num;

  printf("Enter a number: ");
  scanf("%d", &num);

  if (isArmstrong(num))
    printf("The %d is an Armstrong number.\n", num);
  else
    printf("The %d is not an Armstrong number.\n", num);

  if (isPerfect(num))
    printf("The %d is a Perfect number.\n", num);
  else
    printf("The %d is not a Perfect number.\n", num);

  return 0;
}