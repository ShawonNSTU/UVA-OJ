#include <stdio.h>
int main()
{
    long long int a,b,biri,butt,mod;
    while(scanf("%lld %lld",&a,&b)!=EOF){
            butt=a;
            biri=0;
            while(butt>=b){
                mod=butt%b;
                butt/=b;
                biri+=butt;
                butt+=mod;
            }
            printf("%lld\n",a+biri);
    }
    return 0;
}
