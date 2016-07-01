#include <stdio.h>
#define MAX 1000001
int ara[MAX];
void factor_number()
{
    long long int i,j,k,var;
    ara[1]=0;
    for(i=2;i<=MAX;i++){
        k=0;
        var=i;
        for(j=2;j*j<=var;j++){
            if(var%j==0){
                k++;
                var/=j;
                while(var%j==0&&var>1){
                    k++;
                    var/=j;
                }
            }
        }
        if(var!=1)
            k++;
        ara[i]=ara[i-1]+k;
    }
}
int main()
{
    factor_number();
    int num;
    while(scanf("%d",&num)!=EOF){
        printf("%d\n",ara[num]);
    }
    return 0;
}
