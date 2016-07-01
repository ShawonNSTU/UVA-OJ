/*
    Email:shuvroshawon9@gmail.com
    UVA:shawon.ice.nstu
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char digit[52],ch1='a',ch2='A',s[21];
    int i;
    for(i=0;i<=25;i++){
        digit[i]=ch1;
        digit[i+26]=ch2;
        ch1++;
        ch2++;
    }
    while(gets(s)){
        int j,sum=0;
    for(i=0;s[i];i++){
        for(j=0;j<=51;j++){
            if(digit[j]==s[i])
                sum+=j+1;
        }
    }
    int count=0;
    for(i=2;i<=sum/2;i++){
        if(sum%i==0){
            count=1;
            break;
        }
    }
    if(count==0)
        printf("It is a prime word.\n");
    else
        printf("It is not a prime word.\n");
    }
    return 0;
}
