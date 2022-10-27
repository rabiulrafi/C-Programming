#include <stdio.h>
#include <conio.h>
void sum(int, int);

int main()
{
  sum(4,5); 
  getch();
  return 0;
}

void sum(int a, int b){
    printf("a+b= %d", a+b);
}