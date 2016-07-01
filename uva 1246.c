#include <stdio.h>
#include <math.h>
#include <stdlib.h>
#define MAX 10001
int prime_number[MAX],factor_number[MAX];
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
void factor_prime()
{
    int i,j,div,factor;
    memset(factor_number,0,sizeof(factor_number));
    for(i=1;i<=MAX;i++){
        factor=1;
        for(j=2;j<=sqrt(i);j++){
            if(i%j==0){
                factor++;
            div=i/j;
            if(div!=j)
                factor++;
            }
        }
        if(i!=1)
            factor++;
        if(prime_number[factor]==0)
            factor_number[i]=1;
    }
}
int main()
{
    seive();
    factor_prime();
    int T,i,L,H,check;
    scanf("%d",&T);
    while(T--){
        scanf("%d %d",&L,&H);
        check=0;
        for(i=L;i<=H;i++){
            if(factor_number[i]==1){
                if(check==1)
                    printf(" ");
                check=1;
                printf("%d",i);
            }
        }
        if(check==0)
            printf("-1\n");
        else
            printf("\n");
    }
    return 0;
}
