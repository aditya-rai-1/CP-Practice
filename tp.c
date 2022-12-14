#include<stdio.h>
#include<time.h>
#include<stdlib.h>


int main()
{   int n,e;
    int px[5],gx[5];
    printf("Please enter the degree of the polynomial :");
    scanf("%d",&n);
    srand(time(0));
    for(int i = 0; i < n; i++){
        px[i] = rand()%10;
        gx[i] = rand()%10;
    }
    printf("The Degree %d polynomial is f(x) = ",n);
    for(int i = 0; i < n; i++){
        if(px[i] != 0){
            printf("%d",px[i]);
            
            if(i == 0) continue;
            else{
                printf("x^%d ",i);
            }
            if( i != n-1) printf("+");
        }
        else continue;
    }
    printf("\nPlease enter an evaluation point :");
    scanf("%d",&e);
    int ans = px[0], pro = 1;
    for(int i = 1; i < n; i++){
        pro = pro*e;
        ans += pro*px[i];
    }
    printf("f(%d) = %d\n",e,ans);
    printf("Another Degree %d polynomial is g(x) = ");
    for(int i = 0; i < n; i++){
        if(px[i] != 0){
            printf("%d",px[i]);
            
            if(i == 0) continue;
            else{
                printf("x^%d ",i);
            }
            if( i != n-1) printf("+");
        }
        else continue;
    }

    


return 0;
}