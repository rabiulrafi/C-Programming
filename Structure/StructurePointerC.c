#include <stdio.h>
struct person
{
   int age;
   float weight;
};

int main()
{
    struct person *personPtr, person1;
    personPtr = &person1;   

    printf("Enter age: ");
    scanf("%d", &person1.age);

    printf("Enter weight: ");
    scanf("%f", &person1.weight);

    printf("Displaying:\n");
    printf("Age: %d\n", (*personPtr).age);
    printf("weight: %f", (*personPtr).weight);

    return 0;
}