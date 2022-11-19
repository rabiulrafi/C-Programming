#include <stdio.h>
#include <stdlib.h>
int main()
{
    int num, *arr, i, endIndex;
    printf("Enter the number of Elements: ");
    scanf("%d", &num);
    arr = (int*) malloc(num * sizeof(int));
    for(i = 0; i < num; i++)
    {
        scanf("%d", arr + i);
    }
    endIndex= num-1;
    for(int startIndex=0; startIndex<num/2; startIndex++)
    {
        int temp;
        temp= *(arr+startIndex);
        *(arr+startIndex)= *(arr+endIndex);
        *(arr+endIndex)= temp;
        endIndex--;
    }
    printf("\nReverse Oder: ");
    for(i = 0; i < num; i++)
        printf("%d ", *(arr + i));
    return 0;
}
