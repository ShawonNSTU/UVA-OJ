#include <stdio.h>
int main()
{
    long long int a,b,c,d;
    int i,t;
    while((scanf("%d",&t)!=EOF)){
        for(i=1; i<=t; i++){
            scanf("%lld %lld %lld %lld",&a,&b,&c,&d);
            if(a==b&&b==c&&c==d)
                printf("square\n");
            else if((a==b&&c==d)||(b==c&&d==a)||(a==c&&b==d))
                printf("rectangle\n");
            else if((a<=b+c+d)&&(b<=c+d+a)&&(c<=d+a+b)&&(d<=a+b+c))
                printf("quadrangle\n");
            else
                printf("banana\n");
        }
    }
    return 0;
}
