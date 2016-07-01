/*
    Email:shuvroshawon9@gmail.com
    UVA:shawon.ice.nstu
*/

#include <stdio.h>
int ch[91];
char s[31];
void check()
{
    int i,j,num=2,k;
    for(i='A';i<='Z';i++){
        if(num==7||num==9){
            for(k=i;k<=i+3;k++){
                ch[k]=num;
                }
                i+=3;
            }
        else{
        for(j=i;j<=i+2;j++){
            ch[j]=num;
        }
        i+=2;
    }
        num++;
    }
}
int main()
{
    int i;
    check();
    while(gets(s)){
        for(i=0;s[i];i++){
            if(isalpha(s[i]))
                printf("%d",ch[s[i]]);
            else
                printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
