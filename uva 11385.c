#include <stdio.h>
#include <math.h>
long long int fibo_number[50];
void fibonacci()
{
    long long int i=0,a=0,b=1,fib;
    while(1){
        fib=a+b;
        if(fib>=pow(2,31))
            break;
        fibo_number[i]=fib;
        a=b;
        b=fib;
        i++;
    }
}
int main()
{
    fibonacci();
    int i,j,T,N,k,max,check,arr[50];
    long long int ara[150];
    char cipher[110],decipher[150];
    scanf("%d",&T);
    while(T--){
        scanf("%d",&N);
        for(i=0;i<N;i++)
            scanf("%lld",&ara[i]);
        getchar();
        gets(cipher);
        k=0,max=0;
        for(i=0;cipher[i];i++){
            if(cipher[i]>=65&&cipher[i]<=90){
                for(j=0;j<50;j++){
                    if(fibo_number[j]==ara[k]){
                        arr[k]=j;
                        if(arr[k]>max)
                            max=arr[k];
                        k++;
                        break;
                    }
                }
                decipher[j]=cipher[i];
            }
            if(k>=N)
                break;
        }
        for(i=0;i<=max;i++){
                check=0;
            for(j=0;j<k;j++){
                if(i==arr[j]){
                    check=1;
                    break;
                }
            }
            if(check==0)
                decipher[i]=' ';
        }
        decipher[max+1]='\0';
        printf("%s\n",decipher);
    }
    return 0;
}
