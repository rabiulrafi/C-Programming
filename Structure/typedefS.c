#include<stdio.h>
#include<string.h>
typedef struct student {
  int roll;
  float cgpa;
  char name[100];
}Cse,EEE;

int main() {
  Cse cse[10];
  EEE eee[10];
  cse[0].roll=100;
  cse[0].cgpa=1.2;
  strcpy(cse[0].name, "Asique");

  eee[0].roll=100;
  eee[0].cgpa=1.2;
  strcpy(eee[0].name, "Robin");

  
  printf("%s\n", eee[0].name);
  printf("%s\n", cse[0].name);
  return 0;
}