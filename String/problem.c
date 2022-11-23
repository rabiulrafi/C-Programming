#include<stdio.h>
int main(){

    char ch;
    char s1[100], s2[100];
   
    getchar();
    scanf("%s",s1);
    getchar();
    scanf("%[^\n]s",s2);
    printf("%c\n",ch);
    printf("%s\n", s1);
    printf("%s", s2);

}