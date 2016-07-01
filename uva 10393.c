#include <stdio.h>
#include <string.h>
char list[15][20]={" ","qaz","wsx","edc","rfvtgb"," "," ","yhnujm","ik,","ol.","p;/"};
int main()
{
   char str[60],string[1005][60],s[1005][60],swap[60];
   int F,N,i,finger[11],check,j,k,m,index,max;
   while(scanf("%d %d",&F,&N)!=EOF){
    for(i=0;i<F;i++)
        scanf("%d",&finger[i]);
        index=max=0;
        for(i=0;i<N;i++){
            scanf("%s",str);
            check=0;
            for(j=0;str[j];j++){
                    if(check==1) break;
                for(k=0;k<F;k++){
                    if(check==1) break;
                    for(m=0;list[finger[k]][m];m++){
                        if(str[j]==list[finger[k]][m]){
                            check=1;
                            break;
                        }
                    }
                }
            }
            if(check==0){
                strcpy(string[index],str);
                if(strlen(string[index])>max) max=strlen(string[index]);
                ++index;
            }
        }
        k=0;
        for(i=0;i<index;i++){
           if(strlen(string[i])==max){
            check=0;
            for(j=0;j<i;j++){
                if(strcmp(string[i],string[j])==0){
                    check=1;
                    break;
                }
            }
            if(check==0){
                strcpy(s[k],string[i]);
                ++k;
            }
           }
        }
        printf("%d\n",k);
        for(i=0;i<k;i++){
            for(j=i+1;j<k;j++){
                if(strcmp(s[i],s[j])>0){
                    strcpy(swap,s[i]);
                    strcpy(s[i],s[j]);
                    strcpy(s[j],swap);
                }
            }
        }
    for(i=0;i<k;i++)
        printf("%s\n",s[i]);
   }
   return 0;
}
