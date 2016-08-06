#include <stdio.h>
#include <string.h>
int main()
{
    long long int i,j,t,m,num1,num2,sqr,k,div,len,number1,number2,check,n;
    char s[100],str[50],str1[50];
    scanf("%lld",&t);
    for(i=1;i<=t;i++){
        scanf("%lld %lld",&num1,&num2);
        printf("case #%lld\n",i);
        check=1;
    for(j=num1;j<=num2;j++){
        sqr=j*j;
        snprintf(s,100,"%lld",sqr);
        len=strlen(s);
        div=len/2;
        for(k=0;k<div;k++)
            str[k]=s[k];
        str[k]='\0';
        n=k;
        m=0;
        for(k=div;k<len;k++){
            str1[m]=s[k];
            m++;
            }
        str1[m]='\0';
        number1=atoi(str);
        number2=atoi(str1);
        if(number1+number2==j){
            printf("%lld\n",j);
            check=0;
        }
        else if(strlen(str)>2&&str[n-1]=='0'){
            while(n>1){
                str[n-1]='\0';
                number1=atoi(str);
                if(number1+number2==j){
                    printf("%lld\n",j);
                    check=0;
                    break;
                }
                else
                    n--;
            }
        }
        }
        if(check==1)
            printf("no kaprekar numbers\n");
        if(i!=t)
            printf("\n");
    }
    return 0;
}
