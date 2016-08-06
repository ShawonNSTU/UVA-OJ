/*
    Email: shuvroshawon9@gmail.com
    uhunt: shawon.ice.nstu
*/

#include <stdio.h>
#include <string.h>
char str[100][1000];
int len[100],array[150],k;
void BIG_INT_SUM(int MAX_LEN,int depth)
{
    int sum,i,j,carry=0;
    for(i=MAX_LEN-1,k=0;i>=0;i--,k++){
        sum=0;
        sum+=carry;
        for(j=0;j<depth;j++){
            if(len[j]-1>=0){
                sum+=(str[j][len[j]-1])-48;
                len[j]--;
            }
        }
    array[k]=sum%10;
    carry=sum/10;
   }
   if(carry>0) array[k++]=carry;
}
int main()
{
    int i=0,MAX_LEN=0;
    while(gets(str[i])){
    if(strcmp(str[i],"0")==0) break;
    len[i]=strlen(str[i]);
    if(len[i]>MAX_LEN) MAX_LEN=len[i];
    i++;
   }
    BIG_INT_SUM(MAX_LEN,i);
    for(i=k-1;i>=0;i--) printf("%d",array[i]);
    printf("\n");
    return 0;
}
