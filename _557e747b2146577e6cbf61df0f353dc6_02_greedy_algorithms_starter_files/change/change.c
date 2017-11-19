#include<stdio.h>
#include<stdlib.h>

int main()
{
    int n;
    scanf("%d",&n);

    int coins = 0;

    int temp = n/10;
    coins = coins+ temp;
    n= n%10;
    temp = n/5;
    coins = coins + temp;
    n=n%5;
    coins = coins + n;

    printf("%d",coins);


    return 0;
}
