#include <stdio.h>
#include <math.h>
main()
{
    long long int a,b,c;
    while(scanf("%lld %lld",&a,&b)!=EOF){
            if(a>b)
              c=a-b;
            else
              c=b-a;
        printf("%lld\n",c);
    }
    return 0;
}
