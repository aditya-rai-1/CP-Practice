#include<stdio.h>
/*
int cnt = 0;
void print_seq(int n,int val,int x)
{   if(val < 0) return;
    if(val == 0){
        while(x != 0){
            printf("%d ",x%10);
            x /= 10;
        }
        printf("\n");
        cnt++;
        return;
    }
    print_seq(n,val-1,x*10+1);
    print_seq(n,val-2,x*10+2);
    print_seq(n,val-3,x*10+3);

    return;
}*/




int print_seq(int n,int val,int x){
    if(val < 0) return 0;
    if(val == 0){
        while(x != 0){
            printf("%d ",x%10);
            x /= 10;
        }
        printf("\n");
        return 1;
    }

    return (print_seq(n,val-1,x*10+1) + print_seq(n,val-2,x*10+2) + print_seq(n,val-3,x*10+3));

}









int main()
{
    //print_seq(4,4,0);
    //ans(4,4,0);
    int n;
    printf("Enter n:");
    scanf("%d",&n);
    printf("Number of subsequences is %d\n",print_seq(n,n,0));

    return 0;
}