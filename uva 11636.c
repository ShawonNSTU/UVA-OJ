#include <stdio.h>
int main()
{
    long long int num,i,mul,count,t=0;
    while(scanf("%lld",&num)&&num>0){
            mul=1;
            count=0;
            i=1;
        do{
            mul=mul*i;
            i++;
            if(i>2)
                i--;
            count++;
        }while(mul<num);
        printf("Case %lld: %lld\n",++t,--count);
    }
    return 0;
}
