#include <stdio.h>  

int main()  
{  
    int n,f;  
    printf("Enter the number whose factorial you want to calculate?");  
    scanf("%d",&n);  
    f = fact(n);  
    printf("factorial = %d",f);  
}  
int fact(int n)  
{  
    if ( n == 1)  
    {  
        return 1;  
    }  
    else   
    {  
        return 1+fact(n-1);  
    }  
}  