#include<stdio.h>
#include<stdlib.h>

double min(double x , double y);
double max(double x, double y);
int get_max_index(double weights[], int values[],int n);
double getOptimalValue(double capacity, int values[], double weights[],int n);



int main()
{
    int n ;
    double capacity;
    scanf("%d%lf", &n,&capacity);
    //printf("\n %lf\n", capacity);

    int values[n];
    double weights[n];



    for(int i=0; i<n; i++)
    {
        scanf("%d%lf",&values[i],&weights[i]);
    }

    double optimalsol = getOptimalValue(capacity, values, weights,n);

    printf("%0.4f", optimalsol);

    return 0;
}



double getOptimalValue(double capacity, int values[], double weights[],int n)
{
    double tempvalue=0.0;

    for(int i=0; i<n;i++)
    {
        if(capacity==0) return tempvalue;
        int index = get_max_index(weights, values,n);
        double a = min(capacity, (double)weights[index]);
        tempvalue += ((double)values[index]/weights[index]) * a;
        weights[index] -= a;
        capacity -= a;
    }
    return tempvalue;

}



int get_max_index(double weights[], int values[],int n) {
    int max_i = 0;
    double max = 0;

    for (int i = 0; i < n; i++) {
        if (weights[i] != 0 && (double) values[i] / weights[i] > max) {
            max = (double) values[i] / weights[i];
            max_i = i;
        }
    }
    //printf("max index %d\n",max_i);
    return max_i;

}


double min(double x , double y)
{
    if(x<y) return x;
    else return y;
}

double max(double x, double y)
{
    if(x>y) return x;
    else return y;
}
