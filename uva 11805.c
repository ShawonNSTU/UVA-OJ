#include <stdio.h>
int main()
{
    int i,T,N,P,K,sum;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d %d %d",&N,&K,&P);
        sum=K+P;
        while(sum>N){
            sum-=N;
        }
        printf("Case %d: %d\n",i,sum);
    }
    return 0;
}
