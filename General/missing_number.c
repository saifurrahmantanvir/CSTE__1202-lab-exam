#include <stdio.h>

/**
 * @brief Alice, a little boy writes some number in his notebook.
  But there are some missing numbers.
  Write a C program to find the smallest missing number from his notebook
 *
 *
 */
int *bubbleSort(int arr[], int len)
{
  for (int i = 0; i < len; i++)
  {
    for (int j = 0; j < len - i - 1; j++)
    {
      if (arr[j] > arr[j + 1])
      {
        int temp = arr[j];

        arr[j] = arr[j + 1];
        arr[j + 1] = temp;
      }
    }
  }

  return arr;
}

int *insertionSort(int arr[], int len)
{
  for (int i = 1; i < len; i++)
  {
    int curr_value = arr[i];

    int j = i - 1;

    while (j >= 0 && arr[j] > curr_value)
    {
      arr[j + 1] = arr[j];
      j--;
    }

    arr[j + 1] = curr_value;
  }

  return arr;
}

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

  int *sorted = bubbleSort(arr, n);

  int missing = 1;

  for (int i = 0; i < n; i++)
  {
    if (sorted[i] == missing)
      missing++;
  }

  printf("The smallest missing number is: %d\n", missing);

  return 0;
}
