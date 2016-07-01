#include <stdio.h>
#include <string.h>
int main()
{
    char s[50][100],str[50][100];
    int i,num,k,num1,j;
    while(scanf("%d",&num)!=EOF){
    getchar();
    k=0;
    for(i=1;i<=num;i++){
        gets(s[k]);
        gets(s[++k]);
        k++;
    }
    scanf("%d",&num1);
    getchar();
    for(i=0;i<num1;i++)
        gets(str[i]);
        for(i=0;i<num1;i++){
        for(j=0;j<=k;j++){
            if(strcmp(str[i],s[j])==0){
                printf("%s\n",s[j+1]);
                break;
                }
            }
        }
    }
    return 0;
}
