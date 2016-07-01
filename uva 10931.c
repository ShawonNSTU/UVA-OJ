/*
    Email:shuvroshawon9@gmail.com
    UVA:shawon.ice.nstu
*/

#include <stdio.h>
int main()
{
    long int num;
    int k,i,rem,ara[50],count;
    while(scanf("%ld",&num)&&num!=0){
            k=0;
            count=0;
        while(num>0){
            rem=num%2;
            ara[k]=rem;
            num/=2;
            k++;
        }
        printf("The parity of ");
        for(i=k-1;i>=0;i--){
                printf("%d",ara[i]);
            if(ara[i]==1)
                count++;
        }
        printf(" is %d (mod 2).\n",count);
    }
    return 0;
}
