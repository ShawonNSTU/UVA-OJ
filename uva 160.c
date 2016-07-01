#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 101
int prime_number[MAX];
void seive()
{
    int i,j;
    memset(prime_number,0,sizeof(prime_number));
    prime_number[0]=prime_number[1]=1;
    for(i=4;i<=MAX;i+=2)
        prime_number[i]=1;
    for(i=3;i<=sqrt(MAX);i++){
        for(j=i*i;j<=MAX;j+=i)
            prime_number[j]=1;
    }
}
int main()
{
    seive();
    int ara[1000],num,i,j,k,var,count,max,prime[MAX];
    while(scanf("%d",&num)!=EOF&&num!=0){
        k=count=max=0;
        memset(prime,0,sizeof(prime));
        for(i=2;i<=num;i++){
            var=i;
            for(j=2;;j++){
                if(var%j==0){
                    ara[k]=j;
                    k++;
                    var/=j;
                    j=1;
                    if(var==1)
                        break;
                }
            }
        }
        for(i=0;i<k;i++){
            if(ara[i]>max)
                max=ara[i];
        }
        for(i=0;i<k;i++)
            prime[ara[i]]++;
        printf("%3d! =",num);
        for(i=2;i<=max;i++){
            if(prime_number[i]==0){
                    count++;
            if(count>=16){
                if(count==16)
                    printf("\n%9d",prime[i]);
                else
                printf("%3d",prime[i]);
            }
            else
                printf("%3d",prime[i]);
            }
        }
        printf("\n");
    }
    return 0;
}
