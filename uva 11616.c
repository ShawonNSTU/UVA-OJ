#include <stdio.h>
#include <string.h>
#include <ctype.h>
long int decimal(char str[])
{
    int i,var,sum=0;
    for(i=0;str[i];i++){
       if(str[i]=='I'){
            var=i;
            var++;
        if(str[i+1]=='V')
            sum+=4;
        else if(str[i+1]=='X')
            sum+=9;
        else{
            sum+=1;
            var--;
        }
        i=var;
       }
       else if(str[i]=='V')
        sum+=5;
       else if(str[i]=='X'){
            var=i;
            var++;
        if(str[i+1]=='L')
            sum+=40;
        else if(str[i+1]=='C')
            sum+=90;
        else{
            sum+=10;
            var--;
        }
        i=var;
       }
       else if(str[i]=='L')
        sum+=50;
       else if(str[i]=='C'){
            var=i;
            var++;
        if(str[i+1]=='D')
            sum+=400;
        else if(str[i+1]=='M')
            sum+=900;
        else{
            sum+=100;
            var--;
        }
        i=var;
       }
       else if(str[i]=='D')
        sum+=500;
       else if(str[i]=='M')
        sum+=1000;
    }
    return sum;
}
void roman(int num)
{
    char str[20];
    int m=0;
    while(num>0){
        if(num>=1&&num<=3){
            str[m]='I';
            num=num-1;
            m++;
        }
        else if(num==4){
           str[m]='I';
           str[++m]='V';
           num=num-4;
           m++;
        }
        else if(num>=5&&num<=8){
            str[m]='V';
            num=num-5;
            m++;
        }
        else if(num==9){
            str[m]='I';
            str[++m]='X';
            num=num-9;
            m++;
        }
        else if(num>=10&&num<=39){
            str[m]='X';
            num=num-10;
            m++;
        }
        else if(num>=40&&num<=49){
            str[m]='X';
            str[++m]='L';
            num=num-40;
            m++;
        }
        else if(num>=50&&num<=89){
            str[m]='L';
            num=num-50;
            m++;
        }
        else if(num>=90&&num<=99){
            str[m]='X';
            str[++m]='C';
            num=num-90;
            m++;
        }
        else if(num>=100&&num<=399){
            str[m]='C';
            num=num-100;
            m++;
        }
        else if(num>=400&&num<=499){
            str[m]='C';
            str[++m]='D';
            num=num-400;
            m++;
        }
        else if(num>=500&&num<=899){
            str[m]='D';
            num=num-500;
            m++;
        }
        else if(num>=900&&num<=999){
            str[m]='C';
            str[++m]='M';
            num=num-900;
            m++;
        }
        else if(num>=1000){
            str[m]='M';
            num=num-1000;
            m++;
        }
    }
    str[m]='\0';
    printf("%s\n",str);
}
int main()
{
    char str[20];
    int num;
    while(gets(str)){
        if(isalpha(str[0]))
            printf("%ld\n",decimal(str));
        else{
            num=atoi(str);
            roman(num);
        }
    }
    return 0;
}
