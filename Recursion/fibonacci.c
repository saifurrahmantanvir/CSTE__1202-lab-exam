#include <stdio.h>

void fibonacci(int n)
{
  int first = 0, second = 1, next;

  printf("Fibonacci series up to %d terms: ", n);

  for (int i = 1; i <= n; i++)
  {
    printf("%d, ", first);
    next = first + second;
    first = second;
    second = next;
  }

  printf("\n");
}

int main()
{
  int terms = 20;
  fibonacci(terms);

  return 0;
}