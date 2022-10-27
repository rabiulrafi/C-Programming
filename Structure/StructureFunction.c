#include<stdio.h>
#include<string.h>
struct student {
  int roll;
  float cgpa;
  char name[100];
};

void printInfo(struct student s){
    printf("Student roll: %d\n", s.roll);
    printf("Student roll: %f\n", s.cgpa);
    printf("Student roll: %s\n", s.name);
}

int main() {
  struct student s1= {11,3.4,"Billa"};
  struct student s2= {12,3.45,"Billal"};
  printInfo(s1);
  printInfo(s2);

  return 0;
}