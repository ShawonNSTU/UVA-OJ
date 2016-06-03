#include <stdio.h>
#include <string.h>
int main()
{
    int ara[128],i,ascii,k,j,m=1;
    char str[1000];
    while(gets(str)){
    for(i=0;i<128;i++)
        ara[i]=0;
    for(i=0;str[i];i++){
        ascii=str[i];
        ara[ascii]++;
    }
    k=1;
    if(m!=1)
        printf("\n");
    for(i=0;str[i];i++){
        for(j=127;j>=0;j--){
            if(ara[j]==k){
                printf("%d %d\n",j,ara[j]);
        }
    }
    k++;
    }
    m=0;
    }
    return 0;
}
