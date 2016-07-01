/*
    Email:shuvroshawon9@gmail.com
    UVA:shawon.ice.nstu
*/

#include <stdio.h>
int main()
{
    long long int num,i,sum,k=1;
    while(scanf("%lld",&num)){
        if(k==1)
            printf("PERFECTION OUTPUT\n");
            if(num==0){
                printf("END OF OUTPUT\n");
                break;
            }
        sum=0;
        for(i=1;i<=num/2;i++){
            if(num%i==0)
                sum+=i;
    }
        if(num==sum)
            printf("%5lld PERFECT\n",num);
        else if(num>sum)
            printf("%5lld DEFICIENT\n",num);
        else if(num<sum)
            printf("%5lld ABUNDANT\n",num);
        k++;

    }
    return 0;
}
