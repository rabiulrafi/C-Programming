#include <stdio.h>
#include <string.h>
 
int main()
{
    char s[1000]; 
    int i,alphabets=0,digits=0,specialcharacters=0, space=0;
 
    printf("Enter  the string : ");
    gets(s);
     
    for(i=0;s[i]!='\0';i++)  
    {
        if((s[i]>='a' && s[i]<='z')|| (s[i]>='A' && s[i]<='Z') )
          alphabets++;
        else if(s[i]>='0' && s[i]<='9')
         digits++;
         
        else if(s[i]==' ')
         space++;
        else
         specialcharacters++;
 
 	}
 	
    printf("Alphabets = %d\n",alphabets);
    printf("Digits = %d\n",digits);
    printf("Space = %d\n", space);
    printf("Special characters = %d", specialcharacters);
    
 
    return 0;
}