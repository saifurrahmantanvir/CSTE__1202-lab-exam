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

void hof(int (*f)())
{
  f();
}

int main()
{
  hof(getFileSize);

  return 0;
}