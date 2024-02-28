// ** Write a program in C to read a sentence and replace lowercase characters with uppercase and vice versa.
#include <stdio.h>
#include <ctype.h>
#include <string.h>

void swapCase(char *str)
{
  int length = strlen(str);

  for (int i = 0; i < length; i++)
  {
    if (islower(str[i]))
      str[i] = toupper(str[i]);

    else if (isupper(str[i]))
      str[i] = tolower(str[i]);
  }
}

int main()
{
  char sentence[1000];

  printf("Enter a sentence: ");
  fgets(sentence, sizeof(sentence), stdin);

  swapCase(sentence);
  printf("Modified sentence: %s\n", sentence);

  return 0;
}