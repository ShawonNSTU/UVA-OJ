#include <stdio.h>
#define MAX 10001
int prime[MAX];
void sieve()
{
    int i,j;
    prime[0]=prime[1]=1;
    for(i=2;i<MAX;i++)
        prime[i]=0;
    for(i=4;i<MAX;i+=2)
        prime[i]=1;
    for(i=3;i<=sqrt(MAX);i+=2){
        for(j=i*i;j<MAX;j+=i)
            prime[j]=1;
    }
}
int main()
{
    sieve();
    int i,num,sum,count,j;
    while(scanf("%d",&num)&&num!=0){
            count=0;
       for(i=2;i<=num;i++){
        if(prime[i]==0){
                sum=i;
            for(j=i+1;j<=num;j++){
                if(prime[j]==0)
                    sum+=j;
                if(sum>=num)
                    break;
            }
        if(sum==num)
            count++;
        }
       }
       printf("%d\n",count);
    }
    return 0;
}
