#include <stdio.h>
#include <string.h>
char s[200];
void calculation(int number,int power)
{
    char string[200],str[200];
    int i,j,k,ara[500],num,count,carry,mul,var1,var2,sum;
        k=0,num=number;
        while(number>0){
            ara[k++]=number%10;
            number/=10;
        }
        carry=0,count=k;
        for(i=1;i<power;i++){
            for(j=0;j<count;j++){
                mul=ara[j]*num+carry;
                ara[j]=mul%10;
                carry=mul/10;
            }
            while(carry>0){
                ara[count++]=carry%10;
                carry/=10;
            }
        }
        carry=k=j=0;
        for(i=0;i<count;i++){
            mul=ara[i]*power+carry;
            ara[k++]=mul%10;
            carry=mul/10;
        }
        while(carry>0){
            ara[k++]=carry%10;
            carry/=10;
        }
        for(i=k-1;i>=0;i--){
            str[j]=ara[i]+48;
            j++;
        }
        str[j]='\0';
        if(power==1){
            strcpy(s,str);
        }
        else{
            i=carry=0;
            for(k=strlen(s)-1,j=strlen(str)-1;;k--,j--){
                var1=s[k]-48;
                var2=str[j]-48;
                if(j<0) var2=0;
                if(k<0) var1=0;
                if(k<0&&j<0) break;
                sum=var1+var2+carry;
                string[i]=(sum%10)+48;
                carry=sum/10;
                i++;
            }
            if(carry>0){
                string[i]=carry+48;
                string[i+1]='\0';
            }
            else
                string[i]='\0';
            k=0;
            for(i=strlen(string)-1;i>=0;i--){
                s[k]=string[i];
                k++;
            }
            s[k]='\0';
    }
}
int main()
{
    int i,N,A;
    while(scanf("%d %d",&N,&A)!=EOF){
        if(A==0)
            printf("0\n");
    else{
    for(i=1;i<=N;i++){
        calculation(A,i);
    }
    printf("%s\n",s);
    }
    }
    return 0;
}
