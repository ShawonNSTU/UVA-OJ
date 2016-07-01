#include <stdio.h>
#include <string.h>
#include <math.h>
long long int decimal(char s[])
{
    char str[16]={'0','1','2','3','4','5','6','7','8','9',
                    'A','B','C','D','E','F'};
    int len,k,i,j;
    long long int hexa;
    len=strlen(s);
    k=len-1;
    hexa=0;
    for(i=0;i<len;i++){
        for(j=0;str[j];j++){
            if(s[i]==str[j]){
                hexa+=j*pow(16,k);
                break;
            }
        }
        k--;
    }
    return hexa;
}
long long int binary(int num)
{
    long long int i=1,rem,ara[50],m=12;
    for(i=0;i<=12;i++)
        ara[i]=0;
    while(num>0){
        rem=num%2;
        ara[m]=rem;
        num/=2;
        m--;
    }
    for(i=0;i<=12;i++)
        printf("%d",ara[i]);
}
int main()
{
    char s[10],s1[10],ch;
    int num1,num2,t;
    long long int sum1,sum2;
    scanf("%d",&t);
    getchar();
    while(t--){
    scanf("%s %c %s",s,&ch,s1);
    num1=decimal(s);
    num2=decimal(s1);
    sum1=binary(num1);
    printf(" %c ",ch);
    sum2=binary(num2);
    printf(" = ");
        if(ch=='+')
            printf("%d\n",num1+num2);
    else if(ch=='-')
            printf("%d\n",num1-num2);
    }
    return 0;
}
