#include <stdio.h>
#include <string.h>
int palindrome(char str[])
{
    char s[50];
    int len,i,m=0,check1;
    len=strlen(str);
    for(i=len-1;i>=0;i--){
        s[m]=str[i];
        m++;
    }
    s[m]='\0';
    if(strcmp(s,str)==0){
        check1=0;
    }
    else
        check1=1;
    return check1;
}
int reverse(char str[])
{
    int i,m=0,len;
    long long int num;
    char s[50];
    len=strlen(str);
    for(i=len-1;i>=0;i--){
        s[m]=str[i];
        m++;
    }
    s[m]='\0';
    num=atoi(s);
    return num;
}
int main()
{
    int t,count;
    long long int num,add;
    char str[50],s[50];
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(str);
        strcpy(s,str);
        count=0;
        num=atoi(str);
    while(1){
        add=num+reverse(s);
        snprintf(s,50,"%lld",add);
        num=atoi(s);
        if(palindrome(s)==0)
            break;
        count++;
    }
        printf("%d %s\n",++count,s);
    }
    return 0;
}
