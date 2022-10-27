#include<stdio.h>
int num(int x, int y);
int main(){
    int a;
    a= num(2,5);
    printf("%d ", a);
}

int num(int a, int b){
    
    if(b==1){
        return a;
    }
    return a+num(a,b-1);
}
