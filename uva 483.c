#include <stdio.h>
int main()
{
    char str[1000],s[500];
    int i,j,k;
    while(gets(str)){
    for(i=0;str[i];i++){
            k=0;
            while(str[i]!=' '){
                if(str[i]=='\0')
                    break;
                s[k]=str[i];
                i++;
                k++;
            }
            for(j=k-1;j>=0;j--)
                printf("%c",s[j]);
            if(str[i]!='\0')
                putchar(str[i]);
            else
                break;
        }
        putchar('\n');
    }
    return 0;
}
