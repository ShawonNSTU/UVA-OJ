#include <stdio.h>
int main()
{
    int T,A[1000],n,i,j,count;
    scanf("%d",&T);
    while(T--){
        count=0;
        scanf("%d",&n);
        for(i=0;i<n;i++)
            scanf("%d",&A[i]);
        for(i=1;i<n;i++){
            for(j=0;j<i;j++){
                if(A[j]<=A[i])
                    count++;
            }
        }
        printf("%d\n",count);
    }
    return 0;
}
