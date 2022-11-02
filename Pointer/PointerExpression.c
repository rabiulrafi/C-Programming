#include<stdio.h>
int main(){
 
    int a = 4, b=12;
    int *p1,*p2;
    p1 =&a;
    p2 =&b;
    int y= *p1**p2;
    int z = *p1**p2-6;
    printf("%d", y);
    printf("\n%d", z);

}