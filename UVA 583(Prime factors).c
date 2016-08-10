/*
    Email: shuvroshawon9@gmail.com
    uhunt: shawon.ice.nstu
*/

#include <stdio.h>
#include <math.h>
#define MAX 1000001
int prime[MAX];
void algo()
{
    int i, j, x, n;
    n = MAX;
    x= sqrt(n);
    for(i=0;i<=MAX;i++)
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
}
int main()
{
    long int num,i,j;
    int check,m;
   algo();
   while(scanf("%ld",&num)==1&&num!=0){
        printf("%ld = ",num);
       if(num<0){
       printf("-1 ");
       num=-num;
       check=0;
   }
   else
    check=1;
   m=1;
    j=1;
       for(i=2;i<=sqrt(num);i++){
            if(prime[i]==0&&num%i==0){
                    j=0;
                    if(check==0)
                printf("x %ld ",i);
                else{
                        if(m==0)
                        printf("x ");
                    printf("%ld ",i);
                    m=0;
            }
                 num=num/i;
                  i=1;
                 if(num==1)
                    break;
            }
       }
       if(j==1&&(check==0))
       printf("x %d",num);
       else if(j==1&&check==1)
        printf("%d",num);
       else if(j==0)
        printf("x %d",num);
       printf("\n");
   }
    return 0;
}
