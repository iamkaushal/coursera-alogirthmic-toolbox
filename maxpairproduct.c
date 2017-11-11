#include<stdio.h>
#include<stdlib.h>

int main()
{
    int size;
    scanf("%d",&size);
    int arr[size];
    int hashtable[100005]= {-1};

    for(int i=0; i<size;i++){
        scanf("%d", &arr[i]);
        hashtable[arr[i]] =1;
    }

    int max = 0, max2 = 0, temp;

    for(int i=0; i<size;i++)
    {
        if(hashtable[arr[i]]==1 && arr[i]>max) {
            max = arr[i];
            temp = i;
        }
    }


    for(int i=0; i<size;i++)
    {
        if(hashtable[arr[i]]==1 && arr[i]>max2 && i!=temp) {
            max2 = arr[i];
        }
    }

    long long int result = (long long int  )max * max2;
    printf("%lld ",result);

    return 0;
}
