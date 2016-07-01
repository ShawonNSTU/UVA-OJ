#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    int t,i,word,m,j;
    char str[10000],s[500];
    scanf("%d",&t);
    getchar();
    getchar();
    for(i=1;i<=t;i++){
        printf("Case #%d:\n",i);
        while(gets(str)){
            if(str[0]=='\0')
                break;
            word=1;
            for(j=0;str[j];j++){
                    m=0;
                if(isalpha(str[j])){
                    while(isalpha(str[j])){
                        s[m]=str[j];
                        m++;
                        j++;
                    }
                    if(str[j]=='\0')
                        j--;
                    s[m]='\0';
                    if(strlen(s)>=word){
                        printf("%c",s[word-1]);
                        word++;
                    }
                }
            }
            printf("\n");
        }
        if(i!=t)
            printf("\n");
    }
    return 0;
}
