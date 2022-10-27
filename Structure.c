//Structure is a collection of values of different data types
//user define data types
#include<stdio.h>
#include<string.h>



struct student
{
    /* d ata */
    char name[100];
    int roll;
    float cgpa;

};


void printInfo(struct student s1);
int main(){
    struct student s1;
    // s1.roll= 20;
    // s1.cgpa=3.4;
    // strcpy(s1.name,"Rafi");
    
    // printf("Name: %s\n",  s1.name);
    // printf("Roll: %d\n", s1.roll);
    // printf("CGPA: %.2f", s1.cgpa);

    struct student s2 ={"Rafi",3,3.5};
    // struct student *ptr;
    // ptr = &s2;
    // printf("%s ", (*ptr).name);
    // printf("%s ", ptr -> name);
    printInfo(s2);
}

void printInfo(struct student s2){
    printf("%s ", s2.name);
}
