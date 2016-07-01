#include <stdio.h>
int main()
{
    long long int i,j,n,t,sum,average;
    double avg;
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        sum=0;
        scanf("%lld",&n);
        for(j=1;j<n;j++)
            sum+=j;
    avg=(double)sum/2;
    average=sum/2;
    if(average==avg)
        printf("Case %lld: %lld\n",i,average);
    else
        printf("Case %lld: %lld/2\n",i,sum);
    }
    return 0;
}
