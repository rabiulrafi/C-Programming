#include<stdio.h>
int main(){
    int salary = 400;
    int *ptr = &salary;
    int **ptr1= &ptr;
    
    // printf("\n Adress of salary varible: %d", &salary);
    // printf("\nAddress stored in variable ptr : %d ", ptr);
    // printf("\nAddress of variable ptr : %d ", &ptr);
    // printf("\nValue of that address: %d ", *(ptr));
    
    
    printf("\nNew Value of that address: %d ",*(*ptr));
 
}