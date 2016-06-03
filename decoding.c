#include <stdio.h>
#include <string.h>
int main()
{
    char ch;
    int num,i,j,t;
    scanf("%d",&t);
    getchar();
    for(j=1;j<=t;j++){
        int k=1;
    while(1){
        scanf("%c",&ch);
        if(ch=='\n')
            break;
        scanf("%d",&num);
        if(k==1)
        printf("Case %d: ",j);
        for(i=0;i<num;i++)
            printf("%c",ch);
        k++;
        }
        printf("\n");
    }
    return 0;
}
