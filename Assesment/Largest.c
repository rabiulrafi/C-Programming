#include <stdio.h>
void largest(int a[] ,int n );
void sum(int a[], int n);

int main(){
    int Num[]={10,12,19,13,1,22,8};
    int size = sizeof(Num)/sizeof(Num[0]);
    largest(Num,size);
    sum(Num, size);
}

void largest(int a[], int n)
{
    int max1=a[0];
    int max2=a[0];

    for(int i=0;i<n;i++){

        if(a[i]>max1){
            max2= max1;
            max1= a[i];
        }
    }
    printf("Max value is: %d ", max2);
}

void sum(int a[], int n){
    int sum=0;
    for(int i=0;i<n;i++){
        if(a[i]%2==0){
            sum=sum+ a[i];
        }
    }
    printf("\nSum of Even Numbers: %d", sum);
}
