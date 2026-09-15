#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int ans=0;
    while(n<m){
        if(m%2==0){
            m=m/2;
        }
        else{
            m=m+1;
        }
        ans++;
    }
    cout<<ans+abs(n-m)<<endl;
    return 0;
}