#include <stdio.h>

 
int main(){
    float Num[]={11.2, 12.6, 4.5, 5.4, 4.0, 8.2};
    int i=3;
    printf("%.2f \n", Num[i]); //5.40
    printf("%.2f \n", Num[i]+2); //7.40
    printf("%.2f \n", Num[i+2]); //8.20
    printf("%.2f \n", Num[i++]); // 5.40
    printf("%.2f \n",++Num[i]); //5.00 
    
}