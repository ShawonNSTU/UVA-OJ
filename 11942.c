#include <stdio.h>
int main()
{
    int ara[100],i,line,t;
    char str[2];
    scanf("%d",&line);
    for(t=1;t<=line;t++){
            str[0]=str[1]='c';
    for(i=0;i<10;i++){
        scanf("%d",&ara[i]);
    }
    if(t==1)
        printf("Lumberjacks:\n");
    for(i=0;i<10;i++){
        if(ara[i]>ara[i+1]){
            str[0]='a';
            ara[10]=0;
        }
        else{
            str[1]='b';
            ara[10]=101;
        }
    }
    if(str[0]=='a'&&str[1]=='b')
        printf("Unordered\n");
    else
        printf("Ordered\n");
    }
    return 0;
}
