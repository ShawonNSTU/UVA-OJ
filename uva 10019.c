#include <stdio.h>
int binary(int num)
{
    int count=0,rem;
    while(num>0){
        rem=num%2;
        num/=2;
        if(rem==1)
            count++;
    }
    return count;
}
int hexa(int num)
{
    char str[6];
    int count=0,i;
    snprintf(str,6,"%d",num);
    for(i=0;str[i];i++){
        if(str[i]=='1'||str[i]=='2'||str[i]=='4'||str[i]=='8')
            count+=1;
        else if(str[i]=='3'||str[i]=='5'||str[i]=='6'||str[i]=='9')
            count+=2;
        else if(str[i]=='7')
            count+=3;
        else if(str[i]='0')
            count+=0;
    }
    return count;
}
int main()
{
    int num,t;
    scanf("%d",&t);
    while(t--){
        scanf("%d",&num);
    printf("%d %d\n",binary(num),hexa(num));
    }
    return 0;
}
