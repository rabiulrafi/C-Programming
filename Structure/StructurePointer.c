#include<stdio.h>
#include<string.h>
struct student {
  int roll;
  float cgpa;
  char name[100];
};

int main() {
  struct student s1= {11,3.4,"Billa"};
  struct student *ptr= &s1;

  printf("%s", (*ptr).name);
  printf("%s\n", ptr->name);

  return 0;
}