#include <stdio.h>
#define MAX_SIZE 100 // Maximum string size

int main()
{
    // char str1[MAX_SIZE], str2[MAX_SIZE];
    int i, j;

    // printf("Enter first string: ");
    // gets(str1);
    // printf("Enter second string: ");
    // gets(str2);
    char str1[100]="Spark";
    char str2[100]="Programming";

    i=0;
    while(str1[i] != '\0')
    {
        i++;
    }
    j = 0;
    while(str2[j] != '\0')
    {
        str1[i] = str2[j];
        i++;
        j++;
    }
    str1[i] = '\0';

    printf("Concatenated string = %s", str1);

    return 0;
}