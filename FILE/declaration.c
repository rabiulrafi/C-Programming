#include <stdio.h> 
int main() 
{ 
   FILE *fptr; 
   int a=6;
   fptr = fopen("mydoc.txt", "w"); 
      //opening file
   fprintf(fptr, "Hello, I am Omok\n");
   fprintf(fptr,"%d",a);    //writing data into file
   fclose(fptr);    //closing file  
} 