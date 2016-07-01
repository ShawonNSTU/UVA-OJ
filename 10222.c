#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[40]={"qwertyuiop[]\\asdfghjkl;'zxcvbnm,./"};
    char s[1000];
    int i,j;
    while(gets(s)&&s[0]!='\0'){
    for(i=0;s[i];i++){
            if(s[i]!=' '){
        for(j=0;str[j];j++){
            if(tolower(s[i])==tolower(str[j])){
                printf("%c",str[j-2]);
                break;
                }
            }
        }
            else
                printf("%c",s[i]);
        }
        printf("\n");
    }
    return 0;
}
