// ** Write a program in C to print all the alphabets using a pointer.
#include <stdio.h>

int main()
{
  char *ptr;

  char alphabet = 'a';
  ptr = &alphabet;

  printf("Alphabets: ");

  for (int i = 0; i < 26; i++)
  {
    printf("%c ", *ptr);
    (*ptr)++;
  }

  printf("\n");

  return 0;
}
