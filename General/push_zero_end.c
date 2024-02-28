// ** You are given an array of N elements. Write a C program to push all the zero’s of the array to the end of the array
#include <stdio.h>

int main()
{
  int n;

  printf("Enter the number of elements: ");
  scanf("%d", &n);

  int arr[n];

  printf("Enter the elements: ");
  for (int i = 0; i < n; i++)
  {
    scanf("%d", &arr[i]);
  }

  // Variables to keep track of non-zero elements and the position to put the next non-zero element
  int non_zero_index = 0;

  // Traverse the array, move non-zero elements to the front
  for (int i = 0; i < n; i++)
  {
    if (arr[i] != 0)
      arr[non_zero_index++] = arr[i];
  }

  // Fill the remaining elements with zeros
  while (non_zero_index < n)
  {
    arr[non_zero_index++] = 0;
  }

  printf("Array after pushing zeros to the end: ");
  for (int i = 0; i < n; i++)
  {
    printf("%d ", arr[i]);
  }

  printf("\n");

  return 0;
}