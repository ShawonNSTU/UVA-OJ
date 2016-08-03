#include <stdio.h>
#include <math.h>
#define MAX 10000000
#define MAX_1 10000001
int prime[MAX+1],prime_number[MAX];
int prime_num[MAX_1];
int k=0;
void seive()
{
    int i,j,root;
    root=sqrt(MAX);
    prime[0]=prime[1]=1;
    for(i=4;i<=MAX;i+=2) prime[i]=1;
    for(i=3;i<=root;i+=2){
        for(j=i*i;j<=MAX;j+=i)
            prime[j]=1;
    }
    for(i=2;i<=MAX;i++){
        if(!prime[i]) prime_number[k++]=i;
    }
}
int big_prime(int num)
{
    int i,root=sqrt(num);
    for(i=0;prime_number[i]<=root;i++){
        if(num%prime_number[i]==0){
            return 0;
        }
    }
    return 1;
}
int main()
{
    seive();
    int j,L,U,min,max,value1,value2,value3,value4,check,return_value;
    long int i;
    while(scanf("%d %d",&L,&U)!=EOF){
            j=0,check=0;
            min=MAX_1,max=0;
        for(i=L;i<=U;i++){
            if(i<=MAX){
                if(!prime[i]){
                    prime_num[j++]=i;
                    check=1;
                }
            }
            else{
                return_value=big_prime(i);
                if(return_value==1){
                    prime_num[j++]=i;
                    check=1;
                }
            }
            if(i>L&&j>1){
                if((prime_num[j-1]-prime_num[j-2])>max){
                        max=prime_num[j-1]-prime_num[j-2];
                        value1=prime_num[j-2];
                        value2=prime_num[j-1];
                }
                if((prime_num[j-1]-prime_num[j-2])<min){
                       min=prime_num[j-1]-prime_num[j-2];
                       value3=prime_num[j-2];
                       value4=prime_num[j-1];
                    }
              }
        }
        if(check&&j>1) printf("%d,%d are closest, %d,%d are most distant.\n",value3,value4,value1,value2);
        else printf("There are no adjacent primes.\n");
    }
    return 0;
}
