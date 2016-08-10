/*
   Email: shuvroshawon9@gmail.com
   uhunt: shawon.ice.nstu
*/

#include <stdio.h>
int main()
{
   long long int coco_num,rem;
   int i,j,check,max;
   while(scanf("%lld",&coco_num)&&coco_num>=0){
        check=1,max=1;
    for(i=2;i<=5;i++){
        rem=coco_num;
        for(j=1;j<=i+1;j++){
            if(rem%i==1) rem=rem-((rem/i)+1);
            else break;
        }
        if(j==i+1&&rem%i==0&&max<i){
            check=0;
            max=i;
            }
        }
        if(check) printf("%d coconuts, no solution\n",coco_num);
        else printf("%lld coconuts, %d people and 1 monkey\n",coco_num,max);
    }
    return 0;
}
