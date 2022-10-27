#include<stdio.h>
#include<string.h>
struct student {
  int roll;
  float cgpa;
  char name[100];
};
int main() {
  struct student cse[10];
  cse[0].roll=100;
  cse[0].cgpa=3.5;
  strcpy(cse[0].name, "Asique");
  printf("%s\n", cse[0].name);
  printf("%d\n", cse[0].roll);
  printf("%f\n", cse[0].cgpa);
  return 0;
}