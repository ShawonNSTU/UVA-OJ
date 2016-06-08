#include <stdio.h>
int main()
{
    long long int num1,num2,i,loop,max,ara[1],swap,c;
    while(scanf("%lld %lld",&num1,&num2)!=EOF&&num1!=0&&num2!=0){
        if(num1>num2){
            swap=num1;
            num1=num2;
            num2=swap;
        }
        max=0;
    for(i=num1;i<=num2;i++){
        c=i;
        loop=0;
        do{
        if(c%2!=0)
            c=3*c+1;
        else
            c/=2;
        loop++;
    }while(c!=1);
    if(loop>max){
        max=loop;
        ara[0]=i;
        }
    }
    printf("Between %lld and %lld, %lld generates the longest sequence of %lld values.\n",num1,num2,ara[0],max);
    }
return 0;
}
