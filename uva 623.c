#include <stdio.h>
int main()
{
    int i,j,number,mul,ara[3000];
    while(scanf("%d",&number)!=EOF){
        ara[0]=1;
        int digit_counter=1;
        int carry=0;
        for(i=1;i<=number;i++){
            for(j=0;j<digit_counter;j++){
                mul=ara[j]*i+carry;
                ara[j]=mul%10;
                carry=mul/10;
            }
            while(carry>0){
                ara[digit_counter++]=carry%10;
                carry/=10;
            }
        }
        printf("%d!\n",number);
        for(i=digit_counter-1;i>=0;i--) printf("%d",ara[i]);
        printf("\n");
    }
    return 0;
}
