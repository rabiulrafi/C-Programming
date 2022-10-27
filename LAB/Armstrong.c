#include<stdio.h>
int main(){
    int num= 371, result=0, rem;
    int originalNum=num;

    while(num!=0){
        rem= num%10;
        result+= rem*rem*rem;
        num/=10;
    }
    
    if(result == originalNum){
        printf("Armstrong Number");
    }
    else
        printf("Not a armstrong number");

}