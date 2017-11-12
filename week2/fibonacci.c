#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    long long int fib[n];
    fib[0] = 0;
    fib[1] = 1;

    for(int i=2; i<=n;i++)
    {
        fib[i] = fib[i-1] + fib[i-2];
    }

    printf("%lld",fib[n]);
    return 0;
}
