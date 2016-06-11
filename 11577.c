#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int t,ara[91],i,max,ascii;
    char str[1010];
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(str);
        for(i=65;i<=90;i++)
            ara[i]=0;
        for(i=0;str[i];i++){
            if(isalpha(str[i])){
            ascii=toupper(str[i]);
            ara[ascii]++;
            }
        }
        max=ara[65];
        for(i=66;i<=90;i++){
            if(ara[i]>max){
                max=ara[i];
            }
        }
        for(i=65;i<=90;i++){
            if(ara[i]==max)
                printf("%c",i+32);
        }
        printf("\n");
    }
    return 0;
}
