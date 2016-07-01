#include <stdio.h>
#include <string.h>
#include <ctype.h>
int main()
{
    char str[27],str1[27];
    int ara[91],k=1,ascii,i,sum,div,add,rem,sum1,check;
    float ratio;
    for(i=65;i<=90;i++){
        ara[i]=k;
        k++;
    }
    while(gets(str)&&gets(str1)){
            sum=0;
            check=1;
        for(i=0;str[i];i++){
                if(isalpha(str[i])){
                    check=0;
            ascii=toupper(str[i]);
            sum+=ara[ascii];
            }
        }
        while(sum>=10){
                div=1;
                add=0;
                while(div!=0){
                    rem=sum%10;
                    div=sum/10;
                    add+=rem;
                    sum=div;
            }
                sum=add;
        }
        sum1=0;
        for(i=0;str1[i];i++){
            if(isalpha(str1[i])){
                check=0;
                ascii=toupper(str1[i]);
                sum1+=ara[ascii];
            }
        }
        while(sum1>=10){
                div=1;
                add=0;
                while(div!=0){
                    rem=sum1%10;
                    div=sum1/10;
                    add+=rem;
                    sum1=div;
            }
                sum1=add;
        }
        if((str[0]=='\0'&&str1[0]=='\0')||check==1)
            printf("\n");
      else if(sum1==0||sum==0){
        printf("0.00 ");
        putchar('%');
        putchar('\n');
    }
    else{
      ratio=(float)sum1/(float)sum*100;
        if(ratio>100){
            ratio=(float)sum/(float)sum1*100;
        }
      printf("%.2f ",ratio);
      putchar('%');
      putchar('\n');
        }
    }
    return 0;
}
