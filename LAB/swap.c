void swap(int a, int b);
#include<stdio.h>

int main(){
    int a=6, b=5;
    swap(a,b);
}

void swap(int a, int b){
    a = a+b;
    b= a-b;
    a= a-b;
    printf("a= %d, b= %d",a ,b);
}