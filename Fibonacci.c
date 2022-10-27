#include<stdio.h>

int fibo(int n);
void printSeries(int n);

int main(){
    int num;
    scanf("%d", &num);
    int n= fibo(num);
    printf("%d\n", n);
    printSeries(num);
}

int fibo(int n){
    if(n==0 || n==1)
        return 1;
    else
        return fibo(n-1)+fibo(n-2);
}

void printSeries(int n){
    int t1=0, t2=1;
    int nextTerm = t1+t2;
    printf("%d %d ", t1, t2);

    for(int i=3; i<=n;i++){
        printf("%d ", nextTerm);
        t1=t2;
        t2 = nextTerm;
        nextTerm = t1+t2;
    }
}