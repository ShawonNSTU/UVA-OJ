/*
    Email:shuvroshawon9@gmail.com
    UVA:shawon.ice.nstu
*/

#include <stdio.h>
int main()
{
    int N,L,i,swap,j;
    int a[50];
    scanf("%d",&N);
    while(N--){
            int count=0;
        scanf("%d",&L);
        for(i=0;i<L;i++){
            scanf("%d",&a[i]);
        }
        for(i=0;i<L;i++){
            for(j=i+1;j<L;j++){
        if(a[i]>a[j]){
            count++;
            swap=a[j];
            a[j]=a[i];
            a[i]=swap;
        }
        }
    }
    printf("Optimal train swapping takes %d swaps.\n",count);
    }
    return 0;
}
