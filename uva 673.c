#include <stdio.h>
#include <string.h>
int main()
{
    char str[150],str1[150];
    int i,t;
    scanf("%d",&t);
    getchar();
    while(t--){
        int check=1,index=-1;
        gets(str);
        for(i=0;i<strlen(str);i++){
            if(str[i]=='('||str[i]=='[')
                str1[++index]=str[i];
            else{
                if((str[i]==']'&&str1[index]=='[')||(str[i]==')'&&str1[index]=='('))
                    --index;
                else{
                    check=0;
                    break;
                }
            }
        }
    if(index!=-1) printf("No\n");
    else if(check==0) printf("No\n");
    else if(check==1) printf("Yes\n");
    }
    return 0;
}
