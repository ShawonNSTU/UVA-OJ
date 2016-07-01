#include <stdio.h>
#include <math.h>
#define MAX 1001
int main()
{
    int prime[MAX],i,j,a,b,count,div,k;
    for(i=1;i<=MAX;i++)
        prime[i]=0;
    for(i=4;i<=MAX;i+=2)
        prime[i]=1;
    for(i=3;i<=sqrt(MAX);i+=2){
        for(j=i*i;j<=MAX;j+=i)
            prime[j]=1;
    }
   while(scanf("%d %d",&a,&b)!=EOF){
        printf("%d %d:",a,b);
        count=0;
        for(i=1;i<=a;i++){
            if(prime[i]==0)
                count++;
        }
        if(count%2==0)
            b=b*2;
        else
            b=b*2-1;
       div=(count-b)/2;
       k=1;
       j=1;
       for(i=1;i<=a;i++){
        if(prime[i]==0){
            if(k>div){
                printf(" %d",i);
                j++;
            }
        k++;
        }
       if(j>b)
            break;
    }
    printf("\n\n");
   }
   return 0;
}
