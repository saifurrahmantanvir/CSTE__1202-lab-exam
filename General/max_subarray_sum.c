#include <stdio.h>

int main()
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

  int max_sum = arr[0];
  int current_sum = arr[0];

  for (int i = 1; i < n; i++)
  {
    current_sum = (current_sum + arr[i] > arr[i]) ? current_sum + arr[i] : arr[i];

    max_sum = (current_sum > max_sum) ? current_sum : max_sum;
  }

  printf("Maximum subarray sum: %d\n", max_sum);

  return 0;
}