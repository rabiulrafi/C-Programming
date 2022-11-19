
#include<stdio.h>
int main()
{
    FILE *fp = fopen("mydoc.txt","r");
    /* Reading first string */
    char string[2000];
    fscanf(fp,"%[^\n]s",string);
    /* Printing position of file pointer */
    printf("%ld", ftell(fp));
    return 0;
}
