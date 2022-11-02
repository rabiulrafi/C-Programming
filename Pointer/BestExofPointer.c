/*  
Q: Write a function to calculate
the sum, product and average of 2 numbers.
print the sum, product and average in the main function.
*/

#include<stdio.h>
void calculate(int *a, int *b, int *sum, int *product, int *average);

int main(){
    int sum, product,average;
    int a=6, b=6;

    calculate(&a,&b, &sum, &product, &average);

    printf("%d\n",sum);
    printf("%d\n",product);
    printf("%d\n",average);
}

void calculate(int *a, int *b, int *sum, int *product, int *average){

    *sum = *a+*b;
    *product = *a * *b;
    *average = (*a+*b)/2;
}