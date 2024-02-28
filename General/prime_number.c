// ** C program to count prime numbers in an array using a function isPrime()
#include <stdio.h>
#include <math.h>

int isPrime(int n)
{
  if (n <= 1)
    return 0;

  else if (n == 2)
    return 1;

  else if (n % 2 == 0)
    return 0;

  int sqrt_n = sqrt(n);
  for (int i = 3; i <= sqrt_n; i += 2)
  {
    if (n % i == 0)
      return 0;
  }

  return 1;
}

void primeCounter()
{
  int n;

  printf("Enter the size of the array: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int count = 0;

  for (int i = 0; i < n; i++)
  {
    if (isPrime(arr[i]))
      count++;
  }

  printf("Number of prime numbers in the array: %d\n", count);

  return 0;
}

void hof(void (*f)())
{
  f();
}

int main()
{
  hof(primeCounter);

  return 0;
}