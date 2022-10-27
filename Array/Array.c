#include<stdio.h>
int main()
{
    int arr[10]={1,2,3,4};
    float f_arr[10];
    char name[]={'R', 'A', 'F', 'I', '\0'}; 
    char nameS[]="Rafi";
    int n = sizeof(nameS)/sizeof(nameS[0]) -1;
    printf("%d", n);
}