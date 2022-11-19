#include <stdio.h>
void main(){
   FILE *fp;

   fp = fopen("myfile.txt","w+");
   fputs("This is STEC", fp);

   fseek( fp, 7, SEEK_SET );
   fputs("STEC LOVER", fp);
   fclose(fp);
}
