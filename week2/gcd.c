#include<stdio.h>
#include<stdlib.h>

int main()
{
    long long int a,b;
    scanf("%lld%lld",&a,&b);

    printf("%d",gcd(a,b));


    return 0;
}

int gcd(long long int a, long long int b)
{
    long long int divisor = a<=b ? a:b;
    long long int dividend = a>=b ? a:b;

    while(divisor!=0)
    {
        long long int remainder = dividend%divisor;
        dividend = divisor;
        divisor = remainder;
    }

    return dividend;
}
