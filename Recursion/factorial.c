#include <stdio.h>

#define MOD 1000000007

int factorial(int n)
{
  if (n == 0 || n == 1)
    return 1;
  else
    return (n * factorial(n - 1)) % MOD;
}

int main()
{
  int num;

  printf("Enter an integer number: ");
  scanf("%d", &num);

  // Calculate factorial of N modulo 10^9 + 7
  int result = factorial(num);
  printf("Factorial of %d modulo 1e9+7: %d\n", num, result);

  return 0;
}