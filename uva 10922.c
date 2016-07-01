/*
    Email:shuvroshawon9@gmail.com
    UVA:shawon.ice.nstu
*/

#include <stdio.h>
#include <string.h>
int main()
{
    char str[2000];
    int i,degree,sum,num;
    while(gets(str)){
        if(strcmp(str,"0")==0)
            break;
        degree=1;
        sum=0;
        for(i=0;str[i];i++){
            sum+=str[i]-48;
        }
        if(sum%9==0){
        if(sum==9)
            printf("%s is a multiple of 9 and has 9-degree %d.\n",str,degree);
        else{
            num=sum;
        while(num>9){
                sum=0;
            while(num>0){
                sum+=num%10;
                num/=10;
            }
            degree++;
            num=sum;
        }
            printf("%s is a multiple of 9 and has 9-degree %d.\n",str,degree);
        }
    }
        else
            printf("%s is not a multiple of 9.\n",str);
    }
    return 0;
}
