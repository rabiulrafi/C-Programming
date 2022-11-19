#include<stdio.h>  
#include<conio.h>  
void main(){  
FILE *fp;  
char c;  
fp=fopen("mydoc.txt","r");  
while((c=fgetc(fp))!=EOF){  
    printf("%c",c);  
}  
fclose(fp);   
}  