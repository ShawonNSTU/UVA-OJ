/*
    Email: shuvroshawon9@gmail.com
    uhunt: shawon.ice.nstu
*/

#include <bits/stdc++.h>
int main()
{
    int number;
    while(scanf("%d",&number)!=EOF){
        int one=1,mul=10;
        for(long long i=1;;){
            if(i%number==0) break;
            else if(i%number!=0) one++; // here one++ means how many times I multiplied i with 10 and then add 1. . .
                i=(i*10)+1; // multiply with 10 and then add 1 to the modulo. . .because 11*10=110+1=111%7 and 11%7=4*10=40+1=41%7 same!!!
                i%=number; // here I did the modulo operation. . . EX: 41%7
            }
            printf("%d\n",one);
      }
      return 0;
}
