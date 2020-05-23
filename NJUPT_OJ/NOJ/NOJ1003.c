#include <stdio.h>

int Fib(int n)
{
    if(n == 0 || n == 1)
        return n;
    else
        return Fib(n - 2) + Fib(n - 1);
}

int main(void)
{
    int n;
    scanf("%d", &n);
    
    printf("%d\n", Fib(n));
    
    return 0;
}
