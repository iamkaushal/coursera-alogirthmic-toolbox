#include<stdio.h>
#include<stdlib.h>

int largest(int arr[], int n);
int dot_product(int a[], int b[], int n);

int main()
{
    int n;
    scanf("%d",&n);

    int a[n], b[n];

    for(int i=0;i<n;i++)
     scanf("%d", &a[i]);

    for(int i=0;i<n;i++)
     scanf("%d", &b[i]);

     //printf("hello");

    int maxproduct = dot_product(a,b, n);
    printf("%d", maxproduct);
    return 0;
}



int dot_product(int a[], int b[], int n)
{
    int maxproduct = 0;
    if(n== 0) return maxproduct;

        /*   Bubble sorting begins */

  int temp ;
    for (int i = 0; i < n; i++){
            //printf("inside sorting a \n");
        for (int j = 0; j < (n - i - 1); j++){
            if (a[j] > a[j + 1])
            {
                temp = a[j];
                a[j] = a[j + 1];
                a[j + 1] = temp;
            }
        }
    }

    for (int i = 0; i < n; i++)
    {
        for (int j = 0; j < (n - i - 1); j++)
        {
            if (b[j] > b[j + 1])
            {
                temp = b[j];
                b[j] = b[j + 1];
                b[j + 1] = temp;
            }
        }
    }


    for(int i=0;i<n;i++)
    {
        //printf("Inside loop \n");
        maxproduct = maxproduct + a[i] * b[i];
        //printf("%d",maxproduct);
    }

    //printf("function return max %d\n",maxproduct);
    return maxproduct;
}

