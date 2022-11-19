#include <stdio.h>
#include <stdlib.h>
int main()
{
    int i,n;
    int *element;
	printf(" Input total number of elements: ");
    scanf("%d",&n);
    element=(int*)calloc(n,sizeof(int));
    if(element==NULL)
    {
        printf(" No memory is allocated.");
        exit(0);
    }
    printf("\n");
    for(i=0;i<n;++i)
    {
       printf(" Number %d: ",i+1);
       scanf("%d",element+i);
    }
    int max = *(element+0);
    for(i=1;i<n;++i)
    {
       if(max <*(element+i))
           max = *(element+i);
    }
    printf(" The Largest element is : %d \n\n",max);
    return 0;
}
