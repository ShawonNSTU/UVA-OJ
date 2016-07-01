#include <stdio.h>
#include <math.h>
#define MAX 1000001
int digit_primes[MAX];
char prime[MAX];
void algo()
{
    int i, j, x, n, p;
    n = MAX;
    x= sqrt(n);
    prime[0] = prime[1] = 1 ;
    for (i= 4 ; i<=n; i+= 2 ){
    prime[i] = 1 ;
    }
    for (i = 3; i <= x; i += 2 ){
    for (j = i+i; j <= n; j += i){
    prime[j] = 1 ;
    }
    }
    return;
}
int sum ( int n)
{
    int sum= 0 , r;
    while (n!= 0 ){
    r=n% 10;
    n/= 10;
    sum += r;
    }
    return sum;
}
int main()
{
    int a, b, t, i, count=0;
    algo();
    for (i =0; i<=1000000 ; i++)
    {
    if(prime[i]==0 && prime[sum(i)]==0 )
    count++;
    digit_primes[i] = count;
    }
    scanf("%d",&t);
    while (t--){
    scanf ("%d %d", &a, &b);
    printf( "%d\n",digit_primes[b]-digit_primes[a-1]);
    }
    return 0 ;
}
