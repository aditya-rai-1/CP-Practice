#include<stdio.h>
#include<time.h>
#include<math.h>
#include<stdlib.h>




int main()
{   int n,k;
    printf("Enter n and k :");
    scanf("%d %d",&n,&k);
    srand(time(NULL));
    int D = 0;
    for(int i = 0; i < k; i++){
        int d = 0;
        for(int j = 0; j < n; j++){
            int p = rand() & 1 ? -1 : 1;
            d += p;
        }
        D += (d*d);
    }
    float ans = sqrt((float)D/k);
    printf("Output : %f",ans);
    
return 0;
}