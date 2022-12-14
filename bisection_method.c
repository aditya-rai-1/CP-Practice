#include<stdio.h>
#include<math.h>

#define e 2.718281828
#define pie 3.141592654

//Function
double fx(double x)
{
    return (x*x*x - 2 - pow(e,x) );
}



int main()
{   //initial interval
    double a = 1,b = 3;
    //No. of iterations.
    int k = 5;
    for(int i = 0; i <= k; i++)
    {
        printf("Iteration #%d\n",i);
        double x = (a+b)/2;
        printf("Interval : [%lf,%lf]\n",a,b);
        printf("f(x) = %lf\n ",fx(x));
        printf("Root = %lf\n\n\n",x);

        if(fx(x) == 0){
            printf("Root = %lf",x);
            break;
        }
        else if(fx(a)*fx(x) < 0) b = x;
        else a = x;
        

    }


    return 0;
}

