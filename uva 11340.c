/*
    Email:shuvroshawon9@gmail.com
    UVA:shawon.ice.nstu
*/

#include <stdio.h>
int main()
{
    int i,t,ch_value,taka[100],M,j,k;
    char s1[100],s2[1000];
    scanf("%d",&t);
    while(t--){
            double sum=0;
        scanf("%d",&ch_value);
            getchar();
        for(i=0;i<ch_value;i++){
            scanf("%c %d",&s1[i],&taka[i]);
                getchar();
        }
        scanf("%d",&M);
        getchar();
        for(k=1;k<=M;k++){
            gets(s2);
                for(j=0;j<ch_value;j++){
                        for(i=0;s2[i];i++){
                    if(s1[j]==s2[i]){
                        sum+=taka[j];
                    }
                }
            }
        }
        printf("%.2lf$\n",sum/100);
        sum=0;
    }
}
