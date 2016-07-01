#include <stdio.h>
#include <string.h>
int main()
{
    int n,p,max,i,r,j,min,count=0;
    char s[81],str[81],string[81],proposal[81];
    double price;
    while(scanf("%d %d",&n,&p)!=EOF&&n!=0&&p!=0){
            if(count!=0)
                printf("\n");
            max=0;
            getchar();
        for(i=1;i<=n;i++)
            gets(s);
        for(i=1;i<=p;i++){
            gets(str);
            scanf("%lf %d",&price,&r);
            getchar();
            for(j=1;j<=r;j++){
                gets(string);
            }
            if(r>max){
                max=r;
                strcpy(proposal,str);
                min=price;
            }
            else if(r==max){
                if(min>price){
                    min=price;
                    strcpy(proposal,str);
                }
            }
        }
        printf("RFP #%d\n%s\n",++count,proposal);
    }
    return 0;
}
