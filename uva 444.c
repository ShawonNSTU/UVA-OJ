#include <stdio.h>
#include <string.h>
#include <ctype.h>
int reverse(int ascii)
{
    int rem;
    while(ascii>0){
        rem=ascii%10;
        ascii/=10;
        printf("%d",rem);
    }
}
int main()
{
    char str[1000],s[1000];
    int len,m,i,ascii,rem,num,j;
    while(gets(str)){
        len=strlen(str);
        m=0;
        for(i=len-1;i>=0;i--){
            s[m]=str[i];
            m++;
        }
        s[m]='\0';
        for(i=0;s[i];i++){
            if(!isdigit(s[i])){
                ascii=s[i];
                reverse(ascii);
            }
            else{
                j=i;
                num=(10*(s[j]-48))+(s[j+1]-48);
                i++;
                if(num<32){
                    num=((s[j]-48)*100)+((s[j+1]-48)*10)+((s[j+2]-48)*1);
                    i++;
                }
                printf("%c",num);
            }
        }
        printf("\n");
    }
    return 0;
}
