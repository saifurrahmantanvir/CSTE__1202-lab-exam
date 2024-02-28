// ** C program to count characters, words and lines in a text file
#include <stdio.h>

int main()
{
  char filename[100];
  char ch;

  int charCount = 0, wordCount = 0, lineCount = 0, inWord = 0;

  printf("Enter the filename: ");
  scanf("%s", filename);

  FILE *file = fopen(filename, "r");

  if (file == NULL)
  {
    printf("Error opening the file.\n");
    return 1;
  }

  while ((ch = fgetc(file)) != EOF)
  {
    charCount++;

    if (ch == '\n')
      lineCount++;

    if (ch == ' ' || ch == '\n' || ch == '\t')
      inWord = 0;
    else if (inWord == 0)
    {
      inWord = 1;
      wordCount++;
    }
  }

  fclose(file);

  printf("Number of characters: %d\n", charCount);
  printf("Number of words: %d\n", wordCount);
  printf("Number of lines: %d\n", lineCount);

  return 0;
}