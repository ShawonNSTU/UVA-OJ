#include <stdio.h>
int main()
{
    long long int mul;
    int i,num;
    while(scanf("%d",&num)!=EOF){
        mul=1;
        if(num>13)
            printf("Overflow!\n");
        else if(num>=8&&num<=13){
            for(i=1;i<=num;i++)
                mul*=i;
        printf("%lld\n",mul);
        }
        else if(num<0){
            if(num%2==0)
                printf("Underflow!\n");
            else
                printf("Overflow!\n");
        }
        else
           printf("Underflow!\n");
    }
    return 0;
}
