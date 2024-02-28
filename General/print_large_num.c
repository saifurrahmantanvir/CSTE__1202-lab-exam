// ** You are given a large number N. You have to print the number N+1.
#include <stdio.h>
#include <string.h>

void increment(char *number)
{
  int length = strlen(number);
  int carry = 1; // Start with a carry of 1 (to add 1 to the number)

  for (int i = length - 1; i >= 0; i--)
  {
    int digit = number[i] - '0' + carry; // Convert char to int and add carry
    if (digit > 9)
    {
      carry = 1;
      digit %= 10; // Get the last digit
    }
    else
    {
      carry = 0;
    }

    number[i] = digit + '0'; // Convert int back to char
  }

  // If there's still a carry after traversing all digits, we need to insert a new digit
  if (carry)
  {
    printf("1"); // Print the carry
  }

  printf("%s\n", number);
}

int main()
{
  char number[1000];

  printf("Enter the large number: ");
  scanf("%s", number);

  printf("Number after increment: ");
  increment(number);

  return 0;
}