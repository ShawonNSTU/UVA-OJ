/*
    Email:shuvroshawon9@gmail.com
    UVA:shawon.ice.nstu
*/

#include <stdio.h>
int main()
{
    long int N;
    while(scanf("%ld",&N)!=EOF &&N!=0){
        if(N>=101)
            printf("f91(%d) = %ld\n", N,N-10);
        else
            printf("f91(%d) = %ld\n", N,91);
    }
    return 0;
}
