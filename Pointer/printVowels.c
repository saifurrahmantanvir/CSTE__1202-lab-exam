// ** C program to print all the vowels in string using pointer.
#include <stdio.h>
#include <ctype.h>

int strIncludesC(const char *str, char c)
{
  while (*str != '\0')
  {
    if (*str == c)
      return 1;

    str++;
  }

  return 0;
}

void printVowels(const char *str)
{
  printf("Vowels in the string: ");

  while (*str != '\0')
  {
    char c = tolower(*str);

    if (strIncludesC("aeiou", c))
      printf("%c ", *str);

    str++;
  }
}

void hof(void (*f)(const char *))
{
  char str[100];

  scanf(" %[^\n]s", str);

  f(str);
}

int main()
{
  hof(printVowels);

  return 0;
}