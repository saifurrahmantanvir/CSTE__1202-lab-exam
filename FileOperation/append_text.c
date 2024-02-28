#include <stdio.h>

/**
 * @brief Let a text file contain data as bellow
  I Love Programming.
  Now write a C program to append “Programming with file is fun” in a new line in file
 *
 *
 */
int main()
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

  return 0;
}
