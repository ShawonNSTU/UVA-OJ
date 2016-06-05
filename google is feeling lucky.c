#include <stdio.h>
int main()
{
    int t,num[10],max,j,i;
    char s[12][500];
    scanf("%d",&t);
    getchar();
    for(j=1;j<=t;j++){
        max=0;
        for(i=0;i<10;i++){
            scanf("%s %d",s[i],&num[i]);
            if(num[i]>max)
                max=num[i];
        }
        printf("Case #d:\n",j);
        for(i=0;i<10;i++){
            if(max==num[i])
                printf("%s\n",s[i]);
        }
    }
    return 0;
}
