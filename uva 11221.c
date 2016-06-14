#include <stdio.h>
#include <string.h>
#include <math.h>
int palindrome(char str[])
{
    char s[10010];
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
int main()
{
    char str[10010],s[10010];
    int t,i,m,j,root;
    double root1,len;
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++){
            m=0;
        gets(str);
    for(j=0;str[j];j++){
        if(isalpha(str[j])){
            s[m]=str[j];
            m++;
        }
    }
    s[m]='\0';
    len=strlen(s);
    if(palindrome(s)==0){
        root=sqrt(len);
        root1=sqrt(len);
        if(root1-root==0)
            printf("Case #%d:\n%d\n",i,root);
        else
            printf("Case #%d:\nNo magic :(\n",i);
    }
    else
        printf("Case #%d:\nNo magic :(\n",i);
    }
    return 0;
}
