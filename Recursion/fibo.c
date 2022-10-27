#include <stdio.h>
int fib(int n)
{
    if (n == 1 || n==2)
        return 1;
    return fib(n - 1) + fib(n - 2);
}
 
int main()
{
    int n = 5;
    printf("%d", fib(n));
    return 0;
}
//                            fib(5)   
//                      /                \
//                fib(4)                fib(3)   
//              /        \              /       \ 
//          fib(3)      fib(2)         fib(2)   fib(1)
//         /    \       
//   fib(2)   fib(1)  