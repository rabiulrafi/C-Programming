#include <stdio.h>
#include<string.h>
int main(){
   FILE *fp;
   char arr[100]="steclover";
   fp = fopen("putc.txt", "w");//opening file
   int i=0;
   while(i<strlen(arr)){
      fputc(arr[i],fp);
      i++;
   }
   //writing single character into file
   fclose(fp);//closing file
}
