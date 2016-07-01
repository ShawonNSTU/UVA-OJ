/*
    Email:shuvroshawon9@gmail.com
    UVA:shawon.ice.nstu
*/

#include <stdio.h>
int main()
{
    int stacks,height[100],divide,i,t=0;
    while(scanf("%d",&stacks)==1&&stacks!=0){
            ++t;
            int sum=0;
        for(i=0;i<stacks;i++){
            scanf("%d",&height[i]);
            sum+=height[i];
        }
    divide=sum/stacks;
    int m=0;
    for(i=0;i<stacks;i++){
            if(height[i]>divide)
                m+=height[i]-divide;
        }
        printf("Set #%d\nThe minimum number of moves is %d.\n\n",t,m);
    }
    return 0;
}
