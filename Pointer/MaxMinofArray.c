#include <stdio.h>

#include <conio.h>

int main()

{

    int i,j,temp,tempmin, max,min;
    int arr[]={44,12,14,16,22,35,46,55,43,15};
    int *ptr1, *ptr2;
    ptr1 = arr;
    ptr2 = arr;

    max=arr[0];
    min=arr[0];
    for(i=1;i<=10;i++)
    {
      if(max <= *ptr1)
      {
        max = *ptr1;
      }
     ptr1++;

   }
    for(i=1;i<=10;i++)
    {
      if(min >= *ptr2)
      {
        min = *ptr2;
      }
     ptr2++;
   }

    printf("MAX=%d\n",max);
    printf("MIN=%d\n",min);


    return 0;

}