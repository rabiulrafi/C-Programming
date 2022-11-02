#include <stdio.h>
#include <conio.h>
int main()
{
    int arr[]={44,12,14,16,22,35,46,55,43,15};
    int *ptr;
    ptr= arr;
    int max=arr[0];
    int  min=arr[0];
    for(int i=0;i<10;i++){
        if(max<= *ptr ){
            max=*ptr;    
        } 
        ptr++;
    }
    printf("Max: %d", max);
   


}
