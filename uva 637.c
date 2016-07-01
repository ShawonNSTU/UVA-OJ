#include<stdio.h>
int main()
{
    int page,x,count,desire,p,i;
    while(scanf("%d",&page)!=EOF&&page!=0){
    printf("Printing order for %d pages:\n",page);
    x=0,count=1;
    if(page%4==0)
        x+=page/4;
    else
        x+=(page/4)+1;
    desire=x*4;
    p=1;
   for(i=1;i<=x;i++){
    if(count%2!=0){
        printf("Sheet %d, front: ",i);
        if(desire>page)
            printf("Blank");
        else
            printf("%d",desire);
        printf(", %d\n",p);
        desire--;
        p++;
        count++;
        if(page!=1)
            i--;
        }
    else{
        printf("Sheet %d, back : ",i);
        printf("%d",p);
        if(desire>page)
            printf(", Blank\n");
        else
            printf(", %d\n",desire);
        desire--;
        p++;
        count++;
        }
    }
    }
   return 0;
}
