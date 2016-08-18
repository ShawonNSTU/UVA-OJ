/*
    Email: shuvroshawon9@gmail.com
    uhunt: shawon.ice.nstu
*/

#include <bits/stdc++.h>
long long bigmod(long long base,int power,int mod);
int main()
{
    int i,number;
    while(scanf("%d",&number)==1){
        long long mod=0,c;
        for(i=0;;i++){
            c=bigmod(10,i,number);
            mod=(mod+c)%number;
            if(mod==0) break;
        }
    printf("%d\n",++i);
    }
    return 0;
}
long long bigmod(long long base,int power,int mod)
{
    if(power==0) return 1;
    if(power%2) return ((base%mod)*bigmod(base,power-1,mod))%mod;
    else{
        long long c=bigmod(base,power/2,mod);
        return ((c%mod)*(c%mod))%mod;
    }
}
