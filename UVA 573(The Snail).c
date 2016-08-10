/*
    Email: shuvroshawon9@gmail.com
    uhunt: shawon.ice.nstu
*/

#include <stdio.h>
int main()
{
    double H,U,D,F,a,b,c,d,factor;
    int count;
    while(scanf("%lf %lf %lf %lf",&H,&U,&D,&F)!=EOF){
        if(H==0&&U==0&&D==0&&F==0)
                break;
        count=0,b=U,c=0;
        factor=(F*U)/100;
        while(1){
            if(count>0)
                b-=factor;
            if(b>=0)
                c+=b;
            count++;
            if(c>H){
            printf("success on day %d\n",count);
            break;
            }
            c-=D;
        if(c<0){
            printf("failure on day %d\n",count);
            break;
            }
        }
    }
    return 0;
}
