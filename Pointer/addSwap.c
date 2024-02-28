#include <stdio.h>

// ** C to add numbers using call by reference.
void add(int *a, int *b, int *sum)
{
  *sum = *a + *b;
}

void hofOne(void (*f)(int *, int *, int *))
{
  int a = 5, b = 6, sum;
  f(&a, &b, &sum);

  printf("Sum = %d\n", sum);
}

// ** C program to swap two number using pointer
void swap(int *a, int *b)
{
  int temp = *a;
  *a = *b;
  *b = temp;
}

void hofTwo(void (*f)(int *, int *))
{
  int a = 5, b = 8;

  printf("Before %d %d\n", a, b);
  f(&a, &b);

  printf("After %d %d\n", a, b);
}

int main()
{
  hofOne(add);

  hofTwo(swap);

  return 0;
}