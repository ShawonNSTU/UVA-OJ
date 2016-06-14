#include <stdio.h>
#include <string.h>
int main()
{
    int num,i,number,ara[5],m,j;
    char str[20];
    while(scanf("%d",&number)&&number!=0){
        for(i=0;i<5;i++)
            ara[i]=0;
        for(i=1;i<=number;i++){
            num=i;
            m=0;
            while(num>0){
                if(num>=1&&num<=3){
                    str[m]='i';
                    num=num-1;
                    m++;
                }
                else if(num==4){
                    str[m]='i';
                    str[++m]='v';
                    num=num-4;
                    m++;
                }
                else if(num>=5&&num<=8){
                    str[m]='v';
                    num=num-5;
                    m++;
                }
                else if(num==9){
                    str[m]='i';
                    str[++m]='x';
                    num=num-9;
                    m++;
                }
                else if(num>=10&&num<=39){
                    str[m]='x';
                    num=num-10;
                    m++;
                }
                else if(num>=40&&num<=49){
                    str[m]='x';
                    str[++m]='l';
                    num=num-40;
                    m++;
                }
                else if(num>=50&&num<=89){
                    str[m]='l';
                    num=num-50;
                    m++;
                }
                else if(num>=90&&num<=99){
                    str[m]='x';
                    str[++m]='c';
                    num=num-90;
                    m++;
                }
                else if(num==100){
                    str[m]='c';
                    num=num-100;
                    m++;
                }
        }
    str[m]='\0';
    for(j=0;str[j];j++){
        if(str[j]=='i')
            ara[0]++;
        else if(str[j]=='v')
            ara[1]++;
        else if(str[j]=='x')
            ara[2]++;
        else if(str[j]=='l')
            ara[3]++;
        else if(str[j]=='c')
            ara[4]++;
    }
        }
        printf("%d: %d i, %d v, %d x, %d l, %d c\n",number,ara[0],ara[1],ara[2],ara[3],ara[4]);
    }
    return 0;
}
