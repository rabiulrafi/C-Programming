#include<stdio.h>
int num(int x);
int main(){
    int a;
    a= num(5);
    printf("%d ", a);
}

int num(int x){
    int s=0;
    if(x<=1)
        return x;
    s =1 + num(x-1);
    return s;
}
