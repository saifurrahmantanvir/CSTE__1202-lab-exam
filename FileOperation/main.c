#include <stdio.h>

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
