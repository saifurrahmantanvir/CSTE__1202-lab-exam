#include <stdio.h>

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