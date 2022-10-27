#include<stdio.h>
int main()
{
    // float exp;
    // float  a=0,b=1,c=-1;
    // exp = c++ + c++ + ++c;
    // printf("%f\n", exp);

    // int age=10;
    // int  _age=18, __age=22;
    // int *ptr = &age;
    // int *_ptr = &_age;
    // int *__ptr = &__age;
    // *ptr = *ptr+10;
    // printf("%d  %d %d", ptr, _ptr, __ptr );


    int arr[]={10,20,30,40,50,60};

    // int *ptr=  marks;

    // for(int i=0;i<=5;i++){
    //     printf("%d ", *ptr++);
    // }
    int n=6;
    for(int i=0;i<n/2;i++){
        int firstValue = arr[i];
        int secondValue = arr[n-i-1];
        
        arr[i]= secondValue;
        arr[n-i-1] = firstValue;
    }
    for(int i=0;i<n;i++){
        printf("%d\t", arr[i]);
    }

}