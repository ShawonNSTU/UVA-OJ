#include <stdio.h>
#include <string.h>
int array[1000];
int BIG_INT_SUB(char str1[],char str2[])
{
    int len1,len2,num1,num2,carry;
    int i,j,k=0;
    len1=strlen(str1);
    len2=strlen(str2);
    for(i=len1-1,j=len2-1;i>=0;i--){
        num1=str1[i]-48;
        if(j<0) num2=0;
        else num2=str2[j]-48;
        if(num1-num2<0){
            num1+=10;
            array[k++]=num1-num2;
            if(j-1<0) str2[j]='1';
            else{
                carry=(str2[j-1]-48)+1;
                str2[j-1]=carry+48;
                j--;
            }
        }
        else{
            array[k++]=num1-num2;
            j--;
        }
    }
    return k;
}
int main()
{
    char str1[1000],str2[1000];
    int i,check,return_value;
    while(gets(str1)&&gets(str2)){
    return_value=BIG_INT_SUB(str1,str2);
    check=0;
    for(i=return_value-1;i>=0;i--){
        if(array[i]==0&&check!=0) printf("%d",array[i]);
        else if(array[i]!=0){
            check=1;
            printf("%d",array[i]);
            }
        }
        if(!check) printf("0");
        printf("\n");
    }
    return 0;
}
