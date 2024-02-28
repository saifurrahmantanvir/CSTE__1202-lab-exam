#include <stdio.h>

/* _____ _________ _____________ _____________
Write a C program to check whether a given string is palindrome or not.
_____ _________ _____________ _____________ */

int main()
{
  int len;
  scanf("%d", &len);

  char str[len];
  scanf("%s", str);

  int isPalindrome = 1;

  int start = 0, end = len - 1;

  while (start < end)
  {
    if (str[start] != str[end])
    {
      isPalindrome = 0;
      break;
    }
    start++;
    end--;
  }

  if (isPalindrome)
    printf("PALINDROME string");
  else
    printf("NOT a PALINDROME string");

  return 0;
}