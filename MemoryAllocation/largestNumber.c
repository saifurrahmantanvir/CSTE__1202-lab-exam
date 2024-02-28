// ** C program to find largest number using dynamic memory allocation
#include <stdio.h>
#include <stdlib.h>

void largestNumber()
{
  int n;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int *arr = (int *)malloc(n * sizeof(int));

  if (arr == NULL)
  {
    printf("Memory allowcation failed!\n");
    return;
  }

  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", arr + i);
  }

  int largest = *(arr);

  for (int i = 1; i < n; i++)
  {
    if (*(arr + i) > largest)
      largest = *(arr + i);
  }

  printf("Largest number = %d", largest);

  free(arr);
}

void hof(void (*f)())
{
  f();
}

int main()
{
  hof(largestNumber);

  return 0;
}