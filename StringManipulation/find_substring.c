// ** Write a C program to check whether a word is present in a string.
#include <stdio.h>
#include <string.h>

// Function to check if a word is present in a string
int isWordPresent(const char *str, const char *word)
{
  int strLength = strlen(str);
  int wordLength = strlen(word);

  for (int i = 0; i <= strLength - wordLength; i++)
  {
    int j;
    // Check if word is present starting from index i
    for (j = 0; j < wordLength; j++)
    {
      if (str[i + j] != word[j])
        break; // If mismatch is found, break the loop
    }
    // If the loop ended normally without breaking and j reached wordLength,
    // it means the word is present at index i
    if (j == wordLength)
      return 1;
  }

  return 0;
}

int main()
{
  char str[100], word[100];

  printf("Enter a string: ");
  fgets(str, sizeof(str), stdin);

  printf("Enter the word to search: ");
  scanf("%s", word);

  // Check if the word is present in the string
  if (isWordPresent(str, word))
    printf("YES\n");
  else
    printf("NO\n");

  return 0;
}