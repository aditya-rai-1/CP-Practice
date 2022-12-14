#include <stdio.h>

int main()
{
    int a[100],b[100];
    int n,m;
    printf("Enter the size of the two arrays:");
    scanf("%d %d",&n,&m);
    printf("Enter Array1 :");
    for(int i = 0; i < n; i++){
        scanf("%d",&a[i]);
    }
    printf("Enter Array2 :");
    for(int i = 0; i < m; i++){
        scanf("%d",&b[i]);
    }
    int i = 0,j = 0;
    while(1)
    {   if(i >= n || j >= m) break;
        if(a[i] > b[j]){
            int temp = a[i];
                a[i] = b[j];
                b[j] = temp;
                i++; 
        }
        else i++;
    }

    printf("After Rearrangement:\nArray1\n");
    for(int i = 0; i < n; i++){
        printf("%d ",a[i]);
    }
    printf("\nArray2\n");
    for(int i = 0; i < m; i++){
        printf("%d ",b[i]);
    }

    




    return 0;
}