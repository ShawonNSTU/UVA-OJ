#include <stdio.h>
#define SPACE 32
int main()
{
    int i,j,number,mul,ara[1000],index[10];
    while(scanf("%d",&number)&&number){
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
        for(i=0;i<10;i++) index[i]=0;
        for(i=0;i<digit_counter;i++) index[ara[i]]++;
        printf("%d! --\n",number);
        for(i=0;i<10;i++){
            printf("%3c(%d)%3c%3d",SPACE,i,SPACE,index[i]);
            if(i==4) printf("\n");
        }
        printf("\n");
    }
    return 0;
}
