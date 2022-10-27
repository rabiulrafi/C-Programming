#include<stdio.h>

void reverse(int);

int main()
{
    int number, result;
    printf("Enter number: ");
    scanf("%d", &number);
    reverse(number);

    return 0;
}
void reverse(int num)
{
    if(num==0)
        return;
    else
        {
            printf("%d",num%10);
            return reverse(num/10);
        }
        
}