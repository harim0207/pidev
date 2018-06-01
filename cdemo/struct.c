#include <stdio.h>
#include <string.h>
struct Students {
        char  firstname[50];
        char  lastname[50];
        int age;
        int studentid;
};
void printStudent(struct Students* student);
int main()
{
  struct Students StudentArr[2];
  char input[256] ;
  char  firstname[256];
  char  firstname2[256];
  char  lastname[256];
  char lastname2[256];
  int age;
  int age2;
  int studentid;
  int stid2;
  struct Students student1;
  struct Students student2;
  printf("What is your first student's name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", firstname);
  printf("What is your first student's last name?\n");
  fgets(input, 256, stdin);
  sscanf(input, "%s", lastname);
  printf("What is your first student's age?\n");
  while (1)
  {
        fgets(input, 256, stdin);
        if (sscanf(input, "%d", &age) == 1) break;
        printf("Not a valid age - try again!\n");
  }
  printf("What is your first student's student id?\n");
  //fgets(input, 256, stdin);
  //sscanf(input, "%s", studentid);
  while (1)
  {
        fgets(input, 256, stdin);
        if (sscanf(input, "%d", &studentid) == 1) break;
        printf("Not a student id - try again!\n");
  }
  strcpy(student1.firstname, "firstname");
  strcpy(student1.lastname, "lastname");
  student1.age = age;
  student1.studentid = studentid;
  strcpy(StudentArr[0].firstname, "firstname");
}
