#include <stdio.h>
#include <math.h>
#define MAX 1000001
int prime[MAX];
void algo()
{
    int i, j, x, n;
    n = MAX;
    x= sqrt(n);
    for(i=0;i<=1000000;i++)
        prime[i]=0;
    prime[0] = prime[1] = 1 ;
    for (i= 4 ; i<=n; i+= 2 ){
    prime[i] = 1 ;
    }
    for (i = 3; i <= x; i += 2 ){
    for (j = i*i; j <= n; j += i){
    prime[j] = 1 ;
    }
    }
    return;
}
int main()
{
   int num,i,j,a,check;
   algo();
   while(scanf("%d",&num)==1&&num!=0){
       for(i=2;i<num;i++){
        check=0;
        j=num-i;
        if(prime[j]==0&&prime[i]==0){
          a=i;
          check=1;
          break;
        }
       }
        if(check==0)
            printf("Goldbach's conjecture is wrong.\n");
        else
            printf("%d = %d + %d\n",num,a,j);

       }
    return 0;
}
