#include<stdio.h>  
#include<conio.h>  
void main(){  
FILE *fp;  
clrscr();  
  
fp=fopen("mydoc.txt","w");  
fputs("hello c programming",fp);  
  
fclose(fp);  
getch();  
}  