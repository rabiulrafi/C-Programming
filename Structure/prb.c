#include<stdio.h>
struct person
{
    char name[20];
    int day;
    char month[20];
    int year;
    float salary;
};

int main()
{
 struct person person1;
printf(" Enter a values : \n");

scanf("%s %d %s %d %f",
      &person1.name,
      &person1.day,
      &person1.month,
      &person1.year,
      &person1.salary);

printf("%s %d %s %d %.2f\n",
      person1.name,
      person1.day,
      person1.month,
      person1.year,
      person1.salary);

}