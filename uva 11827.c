#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[1000],s[10];
    int t,i,num[100];
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(str);
        int k=0,j;
        int len=strlen(str);
        for(i=0;i<len;i++){
            if(isdigit(str[i])){
                j=0;
                while(isdigit(str[i])){
                    s[j++]=str[i];
                    i++;
                }
                s[j]='\0';
                if(str[i]=='\0') i--;
                num[k++]=atoi(s);
            }
        }
        int MAX_GCD=1,rem=0;
        int num1,num2;
        for(j=0;j<k;j++){
            for(i=j+1;i<k;i++){
                num1=num[j];
                num2=num[i];
                while(num1!=0){
                    rem=num2%num1;
                    num2=num1;
                    num1=rem;
                }
                if(num2>MAX_GCD) MAX_GCD=num2;
            }
        }
        printf("%d\n",MAX_GCD);
    }
    return 0;
}
