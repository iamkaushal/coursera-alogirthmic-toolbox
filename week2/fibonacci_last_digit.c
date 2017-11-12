#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);
    int fibld[n];
    fibld[0] = 0;
    fibld[1] = 1;

    for(int i=2; i<=n;i++)
    {
        fibld[i] = (fibld[i-1] + fibld[i-2])%10 ;
    }

    printf("%d",fibld[n]);

    return 0;
}
