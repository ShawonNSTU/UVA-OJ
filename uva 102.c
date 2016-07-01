#include <stdio.h>
int main()
{
    long int b[3],g[3],c[3],move[6],min;
    int i,index;
    char string[7][4]={"BCG","BGC","CBG","CGB","GBC","GCB"};
    while(scanf("%ld %ld %ld %ld %ld %ld %ld %ld %ld",&b[0],&b[1],&b[2],
                    &g[0],&g[1],&g[2],&c[0],&c[1],&c[2])!=EOF){
    move[0]=b[1]+b[2]+g[0]+g[1]+c[0]+c[2]; //BCG
    move[1]=b[1]+b[2]+g[0]+g[2]+c[0]+c[1]; //BGC
    move[2]=b[0]+b[1]+g[1]+g[2]+c[0]+c[2]; //CBG
    move[3]=b[0]+b[1]+g[0]+g[2]+c[1]+c[2]; //CGB
    move[4]=b[0]+b[2]+g[1]+g[2]+c[0]+c[1]; //GBC
    move[5]=b[0]+b[2]+g[0]+g[1]+c[1]+c[2]; //GCB
    min=move[0];
    index=0;
    for(i=1;i<=5;i++){
        if(min>move[i]){
            min=move[i];
            index=i;
            }
        }
        printf("%s %ld\n",string[index],min);
    }
    return 0;
}
