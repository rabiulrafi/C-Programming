#include<stdio.h>  
#include<conio.h>  
void main(){  
FILE *fp;  
char text[300];  

  
fp=fopen("mydoc.txt","r");  
printf("%s",fgets(text,200,fp));  
  
fclose(fp);  
getch();  
} 