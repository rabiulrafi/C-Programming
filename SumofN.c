#include<stdio.h>

int sum(int n){
    if(n==1){
        return 1;
    }
    int sumNn1= sum(n-1);
    int sumN= sumNn1+n;
    
    return sumN;
}


int main(){

    int N=5;
    int a=sum(N);
    printf("%d",a);

}