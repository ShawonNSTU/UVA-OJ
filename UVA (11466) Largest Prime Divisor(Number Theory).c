/*
    Email: shuvroshawon9@gmail.com
    uhunt: shawon.ice.nstu
*/

#include<stdio.h>
int main()
{
    long long int n,rslt,i,count;
    while(scanf("%lld",&n)&&n){
        count=0;
        if(n<0) n=n*(-1);
        for(i=2;i*i<=n&&n>1;i++){
            if(n%i==0){
                count++;
            while(n%i==0){
                rslt=n;
                n/=i;
            }
        }
    }
        if(count>1&&n==1) printf("%lld\n",rslt);
        else if(n!=1&&count>0) printf("%lld\n",n);
        else printf("-1\n");
    }
    return 0;
}
