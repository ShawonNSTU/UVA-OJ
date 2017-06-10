#include <bits/stdc++.h>
using namespace std;
int main()
{
    ios_base::sync_with_stdio(true);

    int T,N;
    cin>>T;
    for(int t=1;t<=T;t++){
        cin>>N;
        int dp[N],H[N],W[N];

        for(int i=0;i<N;i++) scanf("%d",&H[i]);
        for(int i=0;i<N;i++) scanf("%d",&W[i]);

        int mx_length = W[0];

        for(int i=0;i<N;i++){
            dp[i] = W[i];
            for(int j=0;j<i;j++){
                if(H[j] < H[i]) dp[i] = max(W[i]+dp[j],dp[i]);
            }
            mx_length = max(mx_length,dp[i]);
        }

        int A=mx_length;

        mx_length=W[0];

        for(int i=0;i<N;i++){
            dp[i] = W[i];
            for(int j=0;j<i;j++){
                if(H[j] > H[i]) dp[i] = max(W[i]+dp[j],dp[i]);
            }
            mx_length = max(mx_length,dp[i]);
        }

        int B=mx_length;

       if(A>=B)
          printf("Case %d. Increasing (%d). Decreasing (%d).\n",t,A,B);
       else
          printf("Case %d. Decreasing (%d). Increasing (%d).\n",t,B,A);
    }
    return 0;
}
