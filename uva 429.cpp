#include <bits/stdc++.h>
using namespace std;
vector<set<int> >edges(201);
set<int>::iterator it;
int p[201];
int bfs(int s,int m)
{
    queue<int>Q;
    bool visited[201];
    memset(visited,0,sizeof(visited));
    Q.push(s);
    visited[s]=1;
    while(!Q.empty()){
        int u=Q.front();
        Q.pop();
        for(it=edges[u].begin();it!=edges[u].end();it++){
            int v= *it;
            if(visited[v]!=1){
                visited[v]=1;
                Q.push(v);
                p[v]=u;
            }
        }
        if(visited[m]==1) break;
    }
    int backtrack=m,cnt=0;
    while(backtrack!=s){
        backtrack=p[backtrack];
        cnt++;
    }
    return cnt;
}
int main()
{
    int t;
    cin>>t;
    while(t--){
    vector<pair<int,string> >p;
    map<string,int>mp;
    string s;
    int cnt=0;
    while(1){
        cin>>s;
        if(s=="*") break;
        getchar();
        p.push_back(make_pair(s.size(),s));
        ++cnt;
        mp[s]=cnt;
    }
    getchar();
    sort(p.begin(),p.end());
    while(cnt>0){
        vector<string>vec;
        while(p[cnt-1].first==p[cnt-2].first){
            vec.push_back(p[cnt-1].second);
            --cnt;
            if(cnt==1) break;
        }
        vec.push_back(p[cnt-1].second);
        --cnt;
        for(int j=0;j<vec.size();j++){
            for(int k=0;k<vec.size();k++){
                if(vec[j]==vec[k]) continue;
                else{
                    int diff=0;
                    for(int l=0;l<vec[j].size();l++){
                        if(vec[j][l]!=vec[k][l]) ++diff;
                    }
                if(diff==1){
                    edges[mp[vec[j]]].insert(mp[vec[k]]);
                    edges[mp[vec[k]]].insert(mp[vec[j]]);
                    }
                }
            }
        }
    }
    char s1[30],s2[15],s3[15];
    while(1){
        gets(s1);
        if(strcmp(s1,"") == 0 || feof(stdin)) break;
        sscanf(s1,"%s %s",s2,s3);
        printf("%s %s %d\n",s2,s3,bfs(mp[s2],mp[s3]));
    }
    if(t) cout<<endl;
    for(int i=1;i<201;i++) edges[i].clear();
    }
    return 0;
}
