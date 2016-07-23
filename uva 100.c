#include <stdio.h>
typedef unsigned long int ulint;
int calculation(ulint i, int l);
int main()
{
    ulint i,j,n,swap;
    while(scanf("%lu %lu",&i,&j)==2){
        int length,max=0;
        printf("%lu %lu",i,j);
        if(i>j){
           swap=j;
           j=i;
           i=swap;
        }
    for(n=i;n<=j;n++){
        length=calculation(n,1);
        if(length>max)
            max=length;
    }
    printf(" %lu\n",max);
    }
    return 0;
}
int calculation(ulint i,int l)
{
    if(i==1) return l;
    else if(i%2!=0){
        i=(3*i)+1;
        l++;
    }
    else{
        i/=2;
        l++;
    }
    return calculation(i,l);
}
