#include <stdio.h>
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
int main()
{
    char str[100];
    gets(str);
    printf("%ld",roman(str));
}
