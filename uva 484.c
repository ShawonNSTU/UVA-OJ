#include <stdio.h>
int main()
{
    int t,i,j,k,a,f,m;
    scanf("%d",&t);
    for(i=1;i<=t;i++){
        scanf("%d %d",&a,&f);
        for(m=1;m<=f;m++){
            for(j=1;j<=a;j++){
                for(k=1;k<=j;k++)
                    printf("%d",j);
                printf("\n");
            }
                for(j=a-1;j>=1;j--){
                    for(k=1;k<=j;k++)
                        printf("%d",j);
                    printf("\n");
                }
                if(m!=f)
                printf("\n");
        }
        if(i!=t)
            printf("\n");
    }
    return 0;
}
