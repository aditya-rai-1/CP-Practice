#include<stdio.h>

int main()
{   int n,a = 0,b = 1,c,mul = 1;
    printf("Enter the value of n :");
    scanf("%d",&n);
    for(int j = 0; j < n; j++){
        mul *= -1;
        c = mul*(a+b);
        if(c > 0){
            for(int i = 0; i < c; i++){
                printf("*");
            }
            printf(" %d\n",c);
        }
        else{
            printf("%d ",c);
            for(int i = 0; i < -c; i++){
                printf("-");
            }
            printf("\n");   
        }
        a = b;
        b = (c > 0? c : -c);   
    }

    
return 0;
}