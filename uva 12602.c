#include <stdio.h>
#include <string.h>
#include <math.h>
long long int value(char str[])
{
    long long int len,sum=0;
    int i,m=0,ara[91];
    for(i=65;i<=90;i++){
           ara[i]=m;
           m++;
        }
    len=strlen(str);
    for(i=0;str[i];i++){
        sum+=ara[str[i]]*pow(26,--len);
    }
    return sum;
}
int main()
{
    char s[20],str[20],string[20];
    int t,i,j,m;
    long long int num;
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(s);
        for(i=0;s[i]!='-';i++)
            str[i]=s[i];
        str[i]='\0';
        m=0;
        for(j=i+1;s[j];j++){
            string[m]=s[j];
            m++;
        }
        string[m]='\0';
        num=atoi(string);
        if(abs(value(str)-num)<=100)
            printf("nice\n");
        else
            printf("not nice\n");
    }
}
