/*  
Q: Write a function to calculate
the sum, sub, mul, and division of 2 numbers.
print the sum, product and average in the main function.
*/

#include<stdio.h>
void calculate(int a, int b, int *sum, int *sub, int *mul, int *div);

int main(){
    int sum, sub, mul, div;
    int a=6, b=6;
    calculate(a,b, &sum, &sub, &mul, &div);
    printf("%d\n",sum);
    printf("%d\n",sub);
    printf("%d\n",mul);
    printf("%d\n",div);
}
void calculate(int a, int b, int *sum, int *sub, int *mul, int *div){
    *sum = a+b;
    *sub = a-b;
    *mul = a*b;
    *div = a/b;
}