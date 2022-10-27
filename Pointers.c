#include<stdio.h>
int main(){
    //pointer is variable that store the address of another variable
    // * value at address
    // & address of specific variable

    // int age=22;
    // int *ptr = &age;
    // int _age = *ptr;

    // printf("%d\n",ptr);
    // printf("%d\n",*(&age));

    // 
    

    //Pointer of pointer: Which will store the address of another pointer

    int salary = 400;
    int *ptr = &salary;

    *ptr= *ptr+10;
      
    int **pptr = &ptr;

    printf("%d", **(pptr));

}