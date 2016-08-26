#include <bits/stdc++.h>
#define MAX 1000001
int digits[MAX];
int main()
{
    int a,b,N,M,m,n;
    scanf("%d",&N);
    while(N--){
        getchar();
        int k=0;
        bool check=false;
        scanf("%d",&M);
        for(int i=1;i<=M;i++){
            scanf("%d %d",&a,&b);
            if(i==1&&a+b>=10){
                digits[k++]=(a+b)/10;
                digits[k++]=(a+b)%10;
            }
            else digits[k++]=(a+b)%10;
            if(i!=1&&a+b>=10) digits[k-2]+=(a+b)/10;
            if(digits[k-2]>=10){
                    m=k;
                while(digits[m-2]>=10){
                    n=digits[m-2];
                    digits[m-2]=n%10;
                    m--;
                    digits[m-2]+=n/10;
                    if((m-1)-2<0){
                        check=true;
                        break;
                    }
                }
            }
        }
        for(int i=0;i<k;i++) printf("%d",digits[i]);
        printf("\n");
        if(N>=1) printf("\n");
    }
    return 0;
}
