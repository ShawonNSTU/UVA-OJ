#include <stdio.h>
#include <math.h>
int main()
{
   char tape[50],decode[10000];
   int i,k,pos,sum,ara[50],check=0,letter=0;
   while(gets(tape)){
    if(check==0&&tape[0]=='_')
        continue;
    else if(check==1&&tape[0]=='_')
        break;
    k=0,check=1;
    for(i=1;tape[i];i++){
        if(tape[i]=='|')
            break;
        if(tape[i]==' '){
            ara[k++]=0;
            }
        else if(tape[i]=='o'){
            ara[k++]=1;
            }
        }
        pos=0,sum=0;
        for(i=k-1;i>=0;i--){
            sum+=ara[i]*pow(2,pos);
        pos++;
        }
        decode[letter]=sum;
        ++letter;
    }
    decode[letter]='\0';
    printf("%s",decode);
    return 0;
}
