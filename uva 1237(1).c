#include <stdio.h>
int main()
{
    long int low_price[10000],high_price[10000],P;
    char name[10000][20];
    int i,j,k,var,count,T,D,Q;
    scanf("%d",&T);
    for(i=1;i<=T;i++){
        scanf("%d",&D);
        getchar();
        for(j=0;j<D;j++)
            scanf("%s %ld %ld",name[j],&low_price[j],&high_price[j]);
        scanf("%d",&Q);
        for(j=1;j<=Q;j++){
            scanf("%ld",&P);
            count=0;
            for(k=0;k<D;k++){
                if(P>=low_price[k]&&P<=high_price[k]){
                    count++;
                    if(count>1)
                        break;
                    var=k;
                }
            }
            if(count==1)
                printf("%s\n",name[var]);
            else
                printf("UNDETERMINED\n");
        }
        if(i!=T)
            printf("\n");
    }
    return 0;
}
