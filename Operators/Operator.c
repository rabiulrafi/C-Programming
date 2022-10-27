#include<stdio.h>
int main(){
    int a= 1,b=1;
    // b= --a + a--;
    // b= ++a + ++a;
    // b= ++a + a++;
    // b =++a + a++ + ++a;
    // b = a++ + ++a + ++a;
    // b = a++ + ++a + a++;
    // int y;
    // y= a++;
    
    // printf("%d %d %d", ++a, a , a++);
    printf("%d %d %d", a--, a+a ,a++);
    //  printf("%d %d %d", a+++a, a+a ,a++);


    // printf("%d ", y); 
    // printf("%d ", ++a+a); 
    // printf("%d ", y);
    // printf("%d ", y);

    return 0;     

}