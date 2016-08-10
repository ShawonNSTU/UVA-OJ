/*
    Email:shuvroshawon9@gmail.com
    UVA:shawon.ice.nstu
*/

#include<stdio.h>
#include<string.h>
#include<math.h>
int main()
{
char str[1000];
int i,j,len,a;
long long int sum,m;
while(gets(str)){
if(strcmp(str,"0")==0)
break;
len=strlen(str);
sum=0;
a=len;
for(i=0;str[i];i++){
    m=pow(2,a);
sum+=((str[i]-48)*(m-1));
a--;
}
printf("%lld\n",sum);
}
return 0;
}
