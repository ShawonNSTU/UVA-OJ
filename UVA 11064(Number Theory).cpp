/*
    Email: shuvroshawon9@gmail.com
    uhunt: shawon.ice.nstu
*/

#include <bits/stdc++.h>
#define llint long long
llint phi(llint m)
{
    llint result=m; // Initialize result as m
/*  Procedure: The idea is to count all prime factors and
    their multiples and subtract this count from n to get the value
    of Totient Function.(Prime factors and multiples of prime factors won't
    have GCD as 1).
*/
    for(llint i=2;i*i<=m;i++){
        // Check if i is a prime factor of m.
        if(m%i==0){
            // If yes, then update m and result.
            while(m%i==0){
                m/=i;
            }
        result-=result/i;
        }
    }
    // if m has a prime factor greater than sqrt(m) then,
    // there can be at-most one such prime factor.
    // then subtract the multiples of this.
    if(m>1) result-=result/m;
    return result;
}
int main()
{
    llint m,k,euler,count;
    bool check;
    while(scanf("%lld",&m)!=EOF){
        check=false;
        k=m;
        euler=phi(m); // Count the number of GCD(m,n)=1 by calling Euler Totient function.
        count=0;
        // Count the number of GCD(m,n) = m by counting the divisor.
/*  Suppose for the input 6, GCD(1,6)=1, GCD(2,6)=2, GCD(3,6)=3, GCD(4,6)=2, GCD(5,6)=1, GCD(6,6)=6.
    so, we can see that GCD(2,6)=2, GCD(3,6)=3, GCD(6,6)=6.
    procedure: get the divisor of m. for 6, the divisors are 2,3,6. then we can ensure that GCD(2,6)=2 and GCD(3,6)=6.
*/
        for(llint i=2;i*i<=m;i++){
            check=true;
            if(m%i==0){
                count++;
            if(m/i!=i) count++;
            }
        }
/* here we add 1 because in the above procedure we looped about the limit of sqrt(m).
   Now, suppose 6 are the number. then the sqrt(6)=int(2.44)=2
   then we loop (i=2;i<=2;i++) once time. if 6%2==0 divisor++ that means we got one divisor.
   then if 6/2!=2 then it's the another divisor of 6. Think Yourself!!! :p
   so, after getting the two divisor of 6(2,3) loop terminate. but we can not get 6. because  6 is a divisor of 6.
   so, here we miss one divisor. so we add 1 for that divisor.
*/
        if(check==true) printf("%lld\n",k-(euler+count+1));
        else printf("0\n");
    }
    return 0;
}
