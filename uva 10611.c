#include <stdio.h>
int main()
{
    int ara[50001],arr[50001],i,k,first,mid,last,n,query,number;
    while(scanf("%d",&n)!=EOF){
        k=0,arr[0]=0;
        for(i=1;i<=n;i++){
            scanf("%d",&arr[i]);
            if(arr[i]!=arr[i-1]){
                ara[k++]=arr[i];
            }
        }
        scanf("%d",&query);
        for(i=1;i<=query;i++){
            scanf("%d",&number);
            first=0;
            last=k-1;
            mid=(first+last)/2;
            while(1){
                if(ara[mid]>number)
                    last=mid-1;
                else if(ara[mid]<number)
                    first=mid+1;
                else if(ara[mid]==number)
                    break;
                mid=(first+last)/2;
                if(first>last)
                    break;
            }
            if(first>last){
                if(ara[mid]!=0&&ara[mid]<number)
                    printf("%d ",ara[mid]);
                else
                    printf("X ");
                if(ara[mid+1]!=0&&ara[mid+1]>number)
                    printf("%d",ara[mid+1]);
                else
                    printf("X");
            }
            else{
               if(ara[mid-1]!=0&&ara[mid-1]<number)
                    printf("%d ",ara[mid-1]);
               else
                    printf("X ");
               if(ara[mid+1]!=0&&ara[mid+1]>number)
                    printf("%d",ara[mid+1]);
               else
                    printf("X");
            }
            if(i!=query)
                printf("\n");
        }
        printf("\n");
    }
    return 0;
}
