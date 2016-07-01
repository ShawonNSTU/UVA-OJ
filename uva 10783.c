/*
    Email:shuvroshawon9@gmail.com
    UVA:shawon.ice.nstu
*/

#include <stdio.h>
int main()
{
    int T,a,b,i,j;
    scanf("%d",&T);
    for(j=1;j<=T;j++){
        scanf("%d %d",&a,&b);
        int sum=0;
        for(i=a;i<=b;i++){
            if(i%2!=0)
                sum+=i;
        }
        printf("Case %d: %d\n",j,sum);
    }
    return 0;
}
