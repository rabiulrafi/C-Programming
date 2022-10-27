#include<stdio.h>

void PrintHello();

int main(){
    
    PrintHello(5);
    return 0;

}

void PrintHello(int count){
    if(count==0)
        return;
    printf("Hello\n");
    PrintHello(count-1);
}