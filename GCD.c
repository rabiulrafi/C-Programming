#include<stdio.h>
int main(){
    int n1=10,n2=12;
    int num1= n1, num2=n2;
    while(n1!=n2){
        if(n1>n2)
            n1=n1-n2;
        else
            n2=n2-n1;
        printf("n1: %d n2: %d\n",n1, n2);
    }
    int lcm = (num1*num2)/n1;
    printf("\n%d ",n1);
    printf("\n%d ",lcm);

}