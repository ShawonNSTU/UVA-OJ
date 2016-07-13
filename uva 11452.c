#include <stdio.h>
#include <string.h>
int main()
{
    char str[2005],s[1005],string[1005];
    int t,len,mid,i,j,k,m;
    scanf("%d",&t);
    getchar();
    while(t--){
        gets(str);
        len=strlen(str);
        mid=len/2;
        for(i=0,j=mid;i<j;j--){
            if(str[i]==str[j]){
                m=k=0;
                mid=j;
                while(1){
                    if(i==mid)
                        break;
                s[m++]=str[i];
                string[k++]=str[j];
                i++;
                j++;
            }
            s[m]='\0';
            string[k]='\0';
            if(strcmp(s,string)==0)
                break;
            else
                i=0;
                j=mid;
            }
        }
        int count=check=1;
        for(i=0;s[i];i++){
            if(s[0]==s[i])
                check=0;
            else{
                check=1;
                break;
            }
        }
        if(check==0){
            for(count=1;count<=8;count++)
                printf("%c",s[0]);
            printf("...\n");
        }
        else if(len>j){
            m=0;
           for(k=j;str[k];k++)
            string[m++]=str[k];
            string[m]='\0';
           for(i=0,j=0;s[i]==string[j];i++,j++);
           for(j=i;s[j],count<=8;j++){
            printf("%c",s[j]);
            count++;
            if(s[j+1]=='\0'&&count<=8)
                j=-1;
           }
           printf("...\n");
        }
        else{
            for(i=0;s[i],count<=8;i++){
                printf("%c",s[i]);
                count++;
            if(s[i+1]=='\0'&&count<=8)
                i=-1;
            }
            printf("...\n");
        }
    }
    return 0;
}
