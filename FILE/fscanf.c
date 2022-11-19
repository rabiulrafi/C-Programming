#include <stdio.h>

int main()
{
   FILE *fptr;
   char str[255];  //creating char array to store data of file

    fptr = fopen("mydoc.txt", "r");


    while(fscanf(fptr, "%c", &str)!=EOF)
    {
    		printf("%c", str);
    }


    fclose(fptr);
}
