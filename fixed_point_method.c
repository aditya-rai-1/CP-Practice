#include<stdio.h>

//function

double val(double x){
    return ((1 + x*x*x)/5);
}

int main()
{   
    double x = 2.5;
    int k = 20;
    for(int i = 1; i <= k; i++)
    {   
        x = val(x);
        printf("Iteration #%2d  : ",i);
        printf("Root = %lf\n",x);
    }


    return 0;
}