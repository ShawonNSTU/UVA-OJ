#include <stdio.h>
int main()
{
    int ara[1000],i,j,num,num1;
    while(scanf("%d",&ara[0])&&ara[0]){
        int min=ara[0];
        for(i=1;;i++){
            scanf("%d",&ara[i]);
            if(!ara[i]) break;
            if(ara[i]<min) min=ara[i];
        }
        for(j=0;j<i;j++)
            ara[j]=ara[j]-min;
        int check=0,rem;
        for(j=0;j<=i;j++){
            if(check) num=ara[j-1];
            else{
                num=ara[j++];
                num1=ara[j++];
            }
            check=1;
            while(num!=0){
                rem=num1%num;
                num1=num;
                num=rem;
            }
        }
        printf("%d\n",num1);
    }
    return 0;
}
