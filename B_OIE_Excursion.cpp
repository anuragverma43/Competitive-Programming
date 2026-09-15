#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;
    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll cnt=1;
        ll mx=1;
        for(ll i=0;i<n-1;i++){
            if(v[i]==v[i+1]) {
                cnt++;
            } 
            else{
                mx=max(mx,cnt);
                cnt=1;
            }
        }
        mx=max(mx,cnt);
        if(mx>=m){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
        }
    }
    return 0;
}