#include <stdio.h>
#include <string.h>
int main()
{
    char ch,str[2][200];
    int i,j,k,round,wrong,check,count,actual,ara[130];
    while(scanf("%d",&round)!=EOF&&round!=-1){
        getchar();
        for(i=0;i<=1;i++){
            for(j=97;j<=122;j++)
                ara[j]=0;
            k=0;
        while(1){
            ch=getchar();
            if(ch=='\n')
                break;
            ara[ch]++;
            if(ara[ch]==1){
                str[i][k]=ch;
                k++;
                }
            }
            str[i][k]='\0';
        }
        wrong=0;
        count=0;
        actual=0;
        for(i=0;str[1][i];i++){
                check=1;
            for(j=0;str[0][j];j++){
                if(str[1][i]==str[0][j]){
                    count++;
                    check=0;
                    break;
                }
            }
            if(check==1)
                wrong++;
            if(count<=strlen(str[0])-1)
                actual=wrong;
        }
        if(strlen(str[1])-wrong==strlen(str[0])&&actual<7)
            printf("Round %d\nYou win.\n",round);
        else if(actual>=7)
            printf("Round %d\nYou lose.\n",round);
        else
            printf("Round %d\nYou chickened out.\n",round);
    }
    return 0;
}
