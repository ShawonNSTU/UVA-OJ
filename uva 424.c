#include <stdio.h>
#include <string.h>
int main()
{
    char s[105][105];
    int i=0,j,max=0,h,m,k,sum,ara[1000];
    while(1){
        gets(s[i]);
        if(s[i][0]=='0')
            break;
        if(strlen(s[i])>max)
            max=strlen(s[i]);
        i++;
    }
    h=0;
    m=0;
    for(j=max-1;j>=0;j--){
            sum=0;
        for(k=0;k<i;k++){
            if(s[k][j]!='\0')
                sum+=(s[k][j]-48);
        }
        sum+=h;
        h=sum/10;
        sum=sum%10;
        ara[m]=sum;
        m++;
    }
    if(h!=0)
        printf("%d",h);
    for(i=m-1;i>=0;i--)
        printf("%d",ara[i]);
        printf("\n");
    return 0;
}
