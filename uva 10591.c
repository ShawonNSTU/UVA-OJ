#include <stdio.h>
int happynumber(long long int num)
{
    long long int sum;
    int rem,check;
    if(num<10)
        num*=num;
    while(1){
        sum=0;
        do{
        rem=num%10;
        sum+=rem*rem;
        num/=10;
        }while(num!=0);
        if(sum<10)
            break;
        num=sum;
    }
    if(sum==1)
       check=0;
    else
        check=1;
    return check;
}
int main()
{
    int t,i;
    long long int num;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%lld",&num);
     if(happynumber(num)==0)
        printf("Case #%d: %lld is a Happy number.\n",i,num);
     else
       printf("Case #%d: %lld is an Unhappy number.\n",i,num);
    }
    return 0;
}
