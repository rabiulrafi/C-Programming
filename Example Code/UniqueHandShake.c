#include<stdio.h>
int main()
{
struct node
{
int a, b, c;
};
struct node num = {3, 5, 6};
struct node *ptr = & num;
printf("%d\n", *((int*)ptr + 1 + (3-2)));
return 0;
}