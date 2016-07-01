/*
    Email:shuvroshawon9@gmail.com
    UVA:shawon.ice.nstu
*/

#include <stdio.h>
#include <string.h>
main()
{
    char s1[1000],s3[1000];
    char s2[10][6]={"abc","def","ghi","jkl","mno","pqrs","tuv","wxyz"," "};
    int i,j,k,t,l;
    scanf("%d",&t);
    for(l=1;l<=t;l++){
     gets(s1);
     int sum=0;
    for(i=0;i<=8;i++){
        strcpy(s3,s2[i]);
        for(k=0;s1[k];k++){
        for(j=0;s3[j];j++){
            if(s1[k]==s3[j])
                sum+=(j+1);
        }
    }
}
    printf("Case #%d: %d\n",l,sum);
    }
}
