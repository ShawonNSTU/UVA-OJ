#include <stdio.h>
#include <string.h>
char str1[5001][1500];
int main()
{
    char s[1500]="0",s1[1500]="1";
    char s2[1500],str[1500];
    int i,j,k,a,m,n,h,num,sum,len,len1,len2,var1,var2;
        for(i=1;i<=5000;i++){
            len=strlen(s);
            len1=strlen(s1);
            h=0;
            m=0;
            sum=0;
                for(k=len-1,j=len1-1;;k--,j--){
                    var1=s[k]-48;
                    var2=s1[j]-48;
                if(j<0){
                var2=0;
                }
                if(k<0){
                var1=0;
                }
                if(k<0&&j<0){
                break;
                }
            sum=var1+var2+h;
            str[m]=(sum%10)+48;
            h=sum/10;
            m++;
        }
            if(h!=0){
                str[m]=h+48;
                str[m+1]='\0';
            }
            else
                str[m]='\0';
            len2=strlen(str);
            a=0;
            for(n=len2-1;n>=0;n--){
                s2[a]=str[n];
                a++;
            }
            s2[a]='\0';
            strcpy(str1[i],s1);
            strcpy(s,s1);
            strcpy(s1,s2);
        }
    while(scanf("%d",&num)!=EOF){
            if(num!=0)
                printf("The Fibonacci number for %d is %s\n",num,str1[num]);
            else
                printf("The Fibonacci number for %d is 0\n",num);
        }
    return 0;
}
