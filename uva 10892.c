/* uva 10892 (number theory)
   uhunt: shawon.ice.nstu
   email: shuvroshawon9@gmail.com
*/

#include <stdio.h>
#include <math.h>
int main()
{
    int i,j,num;
    long long int div[1000];
    while(scanf("%d",&num)&&num){
        int cardinal=1,k=0;
        int sqr_root=sqrt(num);
        for(i=1;i<=sqr_root;i++){
            if(num%i==0){
                div[k++]=i;
                if(i!=num/i) div[k++]=num/i;
            }
        }
        int num1,num2,rem;
        int LCM;
        for(i=0;i<k;i++){
            for(j=i+1;j<k;j++){
                num1=div[i];
                num2=div[j];
                while(num2!=0){
                    rem=num1%num2;
                    num1=num2;
                    num2=rem;
                }
                LCM=(div[i]*div[j])/num1;
                if(LCM==num) cardinal++;
            }
        }
        printf("%d %d\n",num,cardinal);
    }
    return 0;
}
