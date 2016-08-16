#include <iostream>
using namespace std;
typedef unsigned long long int ullint;
int main()
{
    string sign;
    int i,j,k,t,ascii[91];
    cin>>t;
    cin.get();
    for(int i=1;i<=t;i++){
        ullint fact=1,mul=1;
        for(j=65;j<=90;j++) ascii[j]=0;
        cin>>sign;
        int len=sign.length();
        for(j=1;j<=len;j++) fact*=j;
        for(j=0;j<len;j++) ascii[sign[j]]++;
        for(j=65;j<=90;j++){
            if(ascii[j]>1){
                ullint factorial=1;
                for(int k=1;k<=ascii[j];k++) factorial*=k;
                mul*=factorial;
            }
        }
        cout<<"Data set "<<i<<": "<<fact/mul<<endl;
    }
    return 0;
}
