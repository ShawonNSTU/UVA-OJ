#include <stdio.h>
int main()
{
    int t,ara[3],max,i,j,value,min;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
            max=0;
        for(j=0;j<3;j++){
            scanf("%d",&ara[j]);
            if(ara[j]>max)
                max=ara[j];
            }
        min=ara[0];
    for(j=1;j<3;j++){
        if(ara[j]<min)
            min=ara[j];
    }
    if((ara[0]==min&&ara[1]==max)||(ara[0]==max&&ara[1]==min))
        value=ara[2];
    else if((ara[0]==min&&ara[2]==max)||(ara[0]==max&&ara[2]==min))
        value=ara[1];
    else if((ara[1]==min&&ara[2]==max)||(ara[1]==max&&ara[2]==min))
        value=ara[0];
    printf("Case %d: %d\n",i,value);
    }
    return 0;
}
