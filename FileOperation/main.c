#include <stdio.h>

int appendTextInFile()
{
  char text[] = "Programming with file is fun\n";

  FILE *file = fopen("file_content.txt", "a");

  if (file == NULL)
  {
    printf("Error opening the file.\n");
    return 1;
  }

  fputs(text, file);

  fclose(file);

  printf("Text appended successfully.\n");

  char buffer[255];

  file = fopen("file_content.txt", "r");

  if (file == NULL)
  {
    printf("Error opening the file.\n");
    return 1;
  }

  while (fgets(buffer, 255, file) != NULL)
  {
    printf("%s", buffer);
  }

  printf("Text read successfully.\n");

  return 0;
}

// ** C program to find the size of a file
int getFileSize()
{
  long size;
  char filename[100];

  printf("Enter the filename: ");
  scanf("%s", filename);

  FILE *file = fopen(filename, "r");

  if (file == NULL)
  {
    printf("Error opening the file.\n");
    return 1;
  }

  fseek(file, 0, SEEK_END);
  size = ftell(file);

  fclose(file);

  printf("Size of the file %s is: %ld bytes\n", filename, size);

  return 0;
}

// ** C program to count characters, words and lines in a text file
int getCounts()
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

#include <ctype.h>

int converToLower()
{
  FILE *fileInput, *fileOutput;
  char filename[100], ch;

  printf("Enter the filename to read: ");
  scanf("%s", filename);

  fileInput = fopen(filename, "r");

  if (fileInput == NULL)
  {
    printf("Error opening the input file.\n");
    return 1;
  }

  fileOutput = fopen("temp.txt", "w");

  if (fileOutput == NULL)
  {
    printf("Error opening the temporary output file.\n");
    fclose(fileInput);
    return 1;
  }

  while ((ch = fgetc(fileInput)) != EOF)
  {
    if (isupper(ch))
      ch = tolower(ch);

    fputc(ch, fileOutput);
  }

  fclose(fileInput);
  fclose(fileOutput);

  rename("temp.txt", filename);
  printf("File contents converted to lowercase successfully.\n");

  return 0;
}

void hof(int (*f)())
{
  f();
}

int main()
{
  hof(converToLower);

  return 0;
}