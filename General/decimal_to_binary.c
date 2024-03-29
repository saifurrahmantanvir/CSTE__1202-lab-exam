// ** Write a C program to convert decimal to binary ( using function)
#include <stdio.h>

void decimalToBinary(int decimal)
{
  int binary[32];
  int index = 0;

  while (decimal > 0)
  {
    binary[index++] = decimal % 2;
    decimal /= 2;
  }

  printf("Binary representation: ");
  for (int i = index - 1; i >= 0; i--)
  {
    printf("%d", binary[i]);
  }

  printf("\n");
}

int main()
{
  int decimal;

  printf("Enter a decimal number: ");
  scanf("%d", &decimal);

  decimalToBinary(decimal);

  return 0;
}
