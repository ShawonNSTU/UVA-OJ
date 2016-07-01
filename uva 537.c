// uva 537
// shawon.ice.nstu

#include <stdio.h>
#include <string.h>
#include <ctype.h>
#include <stdlib.h>
int main()
{
    int i,j,m,n,t;
    double mul,arr[20],ans;
    char str[1000],value[2][20],string[20],number[20];
    scanf("%d",&t);
    getchar();
    for(i=1;i<=t;i++){
        gets(str);
        m=0;
        for(j=0;str[j];j++){
            if((str[j]=='U'||str[j]=='I'||str[j]=='P')&&str[j+1]=='='){
                        n=0;
                    while(str[j]!=' '){
                        value[m][n]=str[j];
                        n++;
                        j++;
                    }
                    value[m][n]='\0';
                    m++;
            }
            if(m==2)
                break;
        }
        for(j=0;j<2;j++){
                mul=1;
            for(m=strlen(value[j])-1;m>=0;m--){
                if(value[j][m]=='V'||value[j][m]=='A'||value[j][m]=='W'){
                        n=--m;
                    if(value[j][n]=='M')
                        mul=100*100*100;
                    else if(value[j][n]=='k')
                        mul=1000;
                    else if(value[j][n]=='m')
                        mul=0.001;
                    else
                        m++;
                }
                else if(isdigit(value[j][m])){
                        n=0;
                    while(value[j][m]!='='){
                        number[n]=value[j][m];
                        n++;
                        --m;
                    }
                    number[n]='\0';
                }
            }
            m=0;
            for(n=strlen(number)-1;n>=0;n--){
                string[m]=number[n];
                m++;
            }
            string[m]='\0';
            arr[j]=mul*atof(string);
        }
        printf("Problem #%d\n",i);
        if((value[0][0]=='U'&&value[1][0]=='I')||(value[0][0]=='I'&&value[1][0]=='U')){
            ans=arr[0]*arr[1];
            printf("P=%.2lfW\n\n",ans);
        }
        else if((value[0][0]=='P'&&value[1][0]=='U')||(value[0][0]=='U'&&value[1][0]=='P')){
            if(value[0][0]=='P'&&value[1][0]=='U')
                ans=arr[0]/arr[1];
            else
                ans=arr[1]/arr[0];
            printf("I=%.2lfA\n\n",ans);
        }
        else if((value[0][0]=='I'&&value[1][0]=='P')||(value[0][0]=='P'&&value[1][0]=='I')){
            if(value[0][0]=='I'&&value[1][0]=='P')
                ans=arr[1]/arr[0];
            else
                ans=arr[0]/arr[1];
            printf("U=%.2lfV\n\n",ans);
        }
    }
    return 0;
}//@End Of Source Code
