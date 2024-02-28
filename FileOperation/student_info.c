// ** C program to read name and marks of N number of student and store them in a file and a structure
#include <stdio.h>

#define MAX_STUDENTS 100

struct Student
{
  char name[50];
  float marks;
};

int main()
{
  int n;
  struct Student students[MAX_STUDENTS];

  FILE *file = fopen("student_info.txt", "w");

  if (file == NULL)
  {
    printf("Error opening file.\n");
    return 1;
  }

  printf("Enter the number of students: ");
  scanf("%d", &n);

  for (int i = 0; i < n; i++)
  {
    printf("Enter name and marks of student %d: ", i + 1);
    scanf("%s %f", students[i].name, &students[i].marks);
    // Write student details to the file
    fprintf(file, "%s %.2f\n", students[i].name, students[i].marks);
  }

  fclose(file);

  printf("Student details written to file successfully.\n");

  return 0;
}