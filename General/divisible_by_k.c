// ** You have an array, and an integer k. Find how many numbers in array divisible by k
#include <stdio.h>

int main()
{
  int n, k;

  printf("Enter the size of the array and the value of K: ");
  scanf("%d %d", &n, &k);

  int arr[n];

  printf("Enter the elements of the array: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  int count = 0;

  for (int i = 0; i < n; i++)
  {
    if (arr[i] % k == 0)
      count++;
  }

  printf("Number of numbers in the array divisible by %d: %d\n", k, count);

  return 0;
}