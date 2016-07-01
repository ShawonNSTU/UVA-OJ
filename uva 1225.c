#include <stdio.h>
int main()
{
    int num,ara[10],i,a,t;
    scanf("%d",&t);
    while(t--){
    for(i=0;i<=9;i++)
        ara[i]=0;
    scanf("%d",&num);
    for(i=1;i<=num;i++){
        if(i<10)
            ara[i]++;
        else{
            a=i;
            while(a!=0){
                ara[a%10]++;
                a/=10;
            }
        }
    }
    for(i=0;i<=9;i++){
        if(i==9)
            printf("%d",ara[i]);
        else
            printf("%d ",ara[i]);
    }
    printf("\n");
    }
    return 0;
}
