#include <stdio.h>
int main()
{
    int h,m,t;
    scanf("%d",&t);
    while(t--){
    scanf("%d",&h);
    getchar();
    scanf("%d",&m);
    h=12-h;
    if(h==0)
        h+=12;
    if(m<60&&m!=0){
        m=60-m;
        h--;
    }
    if(h==0)
        h+=12;
    printf("%02d:%02d\n",h,m);
    }
    return 0;
}
