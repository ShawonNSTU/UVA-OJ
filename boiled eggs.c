#include <stdio.h>
int main()
{
    int t,n,p,q,ara[35],i,sum,count,j;
    scanf("%d",&t);
    for(j=1;j<=t;j++){
        scanf("%d %d %d",&n,&p,&q);
        for(i=0;i<n;i++)
            scanf("%d",&ara[i]);
        if(n>p)
            n=p;
            sum=0;
            count=0;
        for(i=0;i<n;i++){
            if(ara[i]+sum<=q){
                count++;
                sum+=ara[i];
            }
        }
        printf("Case %d: %d\n",j,count);
    }
}
