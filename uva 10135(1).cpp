#include <bits/stdc++.h>

/* the function is used to get the power of i in n!
n! / m , here the power of prime of factor of m is must be equal or less than the prime factor power in n!
here the function is used to check this.
*/

bool get_power(int n,int i,int power)
{
    int div=0;
   while(n>1){
      div+=n/i;
      n/=i;
   }
   if(power<=div) return true;
   else return false;
}
int main()
{
    int i,j,m,n,d,f,power;
    bool check,check1;
    while(scanf("%d %d",&n,&m)!=EOF){
        d=m;
        f=n;
    if(m>1){
        check=false;
          check1=true;
        for(i=2;i*i<=m;i++){
            check=true;
            power=0;
            if(m%i==0){
                while(m%i==0){
                    power++;
                    m/=i;
                }
            if(get_power(n,i,power)==false){
                check1=false;
                break;
                }
            }
        }
        if(check==false){
            if(get_power(n,m,1)==false)
            check1=false;
            }
        else if(m>1&&check==true&&check1==true){
            if(get_power(n,m,1)==false){
                check1=false;
                }
            }
        if(check1==false) printf("%d does not divide %d!\n",d,f);
        else printf("%d divides %d!\n",d,f);
        }
        else printf("%d divides %d!\n",d,f);
    }
    return 0;
}
