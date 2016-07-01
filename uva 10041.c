#include <stdio.h>
#include <math.h>
int main()
{
    long int t,relative,i,ara[501],distance,mid,k,m,swap;
    scanf("%ld",&t);
    while(t--){
            distance=0;
        scanf("%ld",&relative);
        for(i=0;i<relative;i++)
            scanf("%ld",&ara[i]);
         for(k=0;k<i-1;k++){
            for(m=i-1;m>k;m--){
                if(ara[k]>ara[m]){
                    swap=ara[k];
                    ara[k]=ara[m];
                    ara[m]=swap;
                }
            }
        }
        mid=(i-1)/2;
        for(k=mid-1;k>=0;k--)
            distance+=abs(ara[mid]-ara[k]);
        for(k=mid+1;k<i;k++)
            distance+=abs(ara[mid]-ara[k]);
        printf("%ld\n",distance);
    }
    return 0;
}
