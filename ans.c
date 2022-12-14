#include<stdio.h>

int main()
{   int a[16];
    for(int i = 0; i < 16; i++){
        if(i == 15){
            a[i] = 0;
            continue;
        }
        else{
            a[i] = i+1;
        }
    }

    for(int i = 0; i < 16; i++){
        if(!(i%4)) printf("\n");
        if(a[i] == 0){
            printf("* ");
        }
        else{
            printf("%d ",a[i]);
        }
    }
    
    int n;


    while(1)
    {   printf("Enter :");
        scanf("%d",&n);

        switch(n)
        {
            case (-1) : return 0;
        }

    }
    
return 0;
}