// ** C program to convert text of file to lowercase.
#include <stdio.h>
#include <ctype.h>

int main()
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