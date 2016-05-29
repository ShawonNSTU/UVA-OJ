#include <stdio.h>
#include <stdlib.h>
int main()
{
    float value,ans;
    char s[100],x[100];
    int i,N,a,b,j=0;
    scanf("%d",&N);
    while(N--){
        int k=0;
        double sum=0;
    for(i=1;i<=12;i++){
        scanf("%f",&value);
        sum+=value;
    }
    ans=sum/12.0;
    if(ans>=1000.0){
    snprintf(s,50,"%f",ans);
    printf("%s\n\n",s);
    for(i=0;s[i];i++){
        if(s[i]=='.'){
            x[k]=s[i];
            x[k+1]=s[i+1];
            x[k+2]=s[i+2];
    }
    }
    x[k+3]='\0';
        a=(int)ans/1000;
        b=(int)ans%1000;
    printf("%d $%d,%d%s\n",++j,a,b,x);
    }
    else
        printf("%d $%.2f\n",++j,ans);
    }
    return 0;
}
