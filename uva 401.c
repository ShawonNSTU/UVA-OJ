#include <stdio.h>
#include <string.h>
int palindrome(char str[])
{
    char s[100];
    int len,i,m=0,check1;
    len=strlen(str);
    for(i=len-1;i>=0;i--){
        s[m]=str[i];
        m++;
    }
    s[m]='\0';
    if(strcmp(s,str)==0){
        check1=0;
    }
    else
        check1=1;
    return check1;
}
char reverse(char ch)
{
    char check = '0';
    if(ch=='E') ch='3';
    else if(ch=='J') ch='L';
    else if(ch=='L') ch='J';
    else if(ch=='Z') ch='5';
    else if(ch=='2') ch='S';
    else if(ch=='S') ch='2';
    else if(ch=='3') ch='E';
    else if(ch=='5') ch='Z';
    else if(ch=='A'||ch=='H'||ch=='I'||ch=='M'||ch=='O'||ch=='T'||ch=='U') ch=ch;
    else if(ch=='V'||ch=='W'||ch=='X'||ch=='Y'||ch=='1'||ch=='8') ch=ch;
    else check='1';
    if(check=='0') return ch;
    else return '!';
}
int mirror(char str[])
{
    char s[100],s1[100];
    int i,len,check2,m=0,n=0;
    len=strlen(str);
    for(i=0;i<len;i++){
    if(reverse(str[i])!='!'){
        s[n]=reverse(str[i]);
        n++;
        }
    }
    s[n]='\0';
    for(i=n-1;i>=0;i--){
        s1[m]=s[i];
        m++;
    }
    s1[m]='\0';
    if(strcmp(s1,str)==0)
        check2=0;
    else
        check2=1;
    return check2;
}
int main()
{
    char str[100];
    while(gets(str)){
    if(palindrome(str)==0&&mirror(str)==0)
        printf("%s -- is a mirrored palindrome.\n\n",str);
    else if(palindrome(str)==0&&mirror(str)!=0)
        printf("%s -- is a regular palindrome.\n\n",str);
    else if(palindrome(str)!=0&&mirror(str)==0)
        printf("%s -- is a mirrored string.\n\n",str);
    else
        printf("%s -- is not a palindrome.\n\n",str);
    }
    return 0;
}
