#include<stdio.h>
#include<string.h>


int fun(int n){
    if(n==1)
        return 1;
    else
        return 1+fun(n-1);
}

void reverse(char a[], int length ){
    if(length==0)
    {
        printf("%c",a[length]);
        return;
    }
    printf("%c",a[length]);
    reverse(a,length-1);
}

int main(){
    char a[]="Rafiaaa";
    int length = strlen(a);
    reverse(a, length-1);

    // for(int i=1; i<=strlen(a);i++)
    // {
    //     printf("%c",a[strlen(a)-i]);
    // }

}