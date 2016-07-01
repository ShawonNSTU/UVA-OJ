#include <stdio.h>
#include <math.h>
int main()
{
    long int ara[100005],var1,i,sqr,a,b;
    double var2;
    for(i=1;i<=100000;i++){
        var1=sqrt(i);
        var2=sqrt(i);
        if(var2-var1==0)
            ara[i]=1;
        }
    while(scanf("%ld %ld",&a,&b)!=EOF){
        if(a==0&&b==0)
            break;
        sqr=0;
    for(i=a;i<=b;i++){
        if(ara[i]==1)
            sqr++;
        }
    printf("%ld\n",sqr);
    }
    return 0;
}
