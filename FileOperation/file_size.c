// ** C program to find the size of a file
#include <stdio.h>

int main()
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