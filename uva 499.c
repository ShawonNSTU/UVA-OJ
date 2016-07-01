#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char s[1000];
    int ascii,i,max,ara[123];
    while(gets(s)){
        for(i=65;i<=122;i++)
            ara[i]=0;
            max=0;
        for(i=0;s[i];i++){
            if(isalpha(s[i])){
                ascii=s[i];
                ara[ascii]++;
                if(ara[ascii]>max)
                    max=ara[ascii];
            }
        }
        for(i=65;i<=122;i++){
            if(ara[i]==max)
                printf("%c",i);
        }
            printf(" %d",max);
        printf("\n");
    }
    return 0;
}
