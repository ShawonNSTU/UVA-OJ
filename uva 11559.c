#include <stdio.h>
int main()
{
    int participants,hotels,weeks,price,bed_numbers[15],check,check1,check2;
    int i,j,k;
    long long int cost,min,budget;
    while(scanf("%d %lld %d %d",&participants,&budget,&hotels,&weeks)!=EOF){
            min=0;
            check1=0;
            check2=0;
        for(i=1;i<=hotels;i++){
            scanf("%d",&price);
            for(j=0;j<weeks;j++)
                scanf("%d",&bed_numbers[j]);
            cost=participants*price;
            if(cost<=budget){
                check1=1;
            for(k=0;k<j;k++){
                if(bed_numbers[k]>=participants)
                    check=1;
                else{
                    check=0;
                    break;
                }
            }
            if(check==1){
                    check2=1;
                if((min<cost&&min==0)||min>cost)
                        min=cost;
            }
        }
        }
    if(check1==0||(check1==1&&check2==0))
            printf("stay home\n");
    else
            printf("%lld\n",min);
    }
    return 0;
}
