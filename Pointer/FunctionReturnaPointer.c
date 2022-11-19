#include <stdio.h>
int* getmax(int*, int*);
void main()
{
 int numa=0;
 int numb=0;
 int *result;

printf(" Input the first number : ");
scanf("%d", &numa);
printf(" Input the second  number : ");
scanf("%d", &numb); 	

 result = getmax(&numa, &numb);
 printf(" The number %d is larger.  \n\n",*result);
}

int* getmax(int *n1, int *n2)
{
 if(*n1 > *n2)
  return n1;
 else
  return n2;
}