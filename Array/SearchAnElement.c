#include<stdio.h>
int main(){
    int arr[]={22,44,33,77,67,34};
    int search =77;
    int n= sizeof(arr)/sizeof(arr[0]);
    int i=0, flag=0;
    
    while(i<n){
        if(arr[i]==search){
            printf("Found at: %d", i+1);
            flag=1;
            break;
        }
        i++;
    }
    
    if(flag==0){
        printf("Value not found");
    }


}