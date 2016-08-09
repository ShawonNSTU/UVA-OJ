/*
    Email: shuvroshawon9@gmail.com
    uhunt: shawon.ice.nstu
*/

#include <stdio.h>
#include <math.h>
#define MAX 100000000
char prime[MAX];
void seive()
{
    int i,j,x;
    x=sqrt(MAX);
    prime[0]=prime[1]=1;
    for(i=4;i<=MAX;i+=2)
        prime[i]=1;
    for(i=3;i<=x;i+=2){
        for(j=i*i;j<=MAX;j+=i)
            prime[j]=1;
    }
}
int main()
{
    seive();
    int n,i,m,check;
    while(scanf("%d",&n)!=EOF){
        if(n%2==0){
            check=0;
            i=n/2;
            m=(n/2)-1;
            for(i=i+1;i<n;i++){
                if(prime[i]!=1&&prime[m]!=1&&i+m==n){
                    check=1;
                    printf("%d is the sum of %d and %d.\n",n,m,i);
                    break;
                }
                else m--;
            }
            if(!check) printf("%d is not the sum of two primes!\n",n);
        }
        else{
            if(prime[n-2]!=1&&n-2>1) printf("%d is the sum of %d and %d.\n",n,2,n-2);
            else printf("%d is not the sum of two primes!\n",n);
        }
    }
    return 0;
}
