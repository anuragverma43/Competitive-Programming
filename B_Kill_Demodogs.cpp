#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;
const ll inv6=166666668;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll ans=2022;
        ans=ans*(n%mod)%mod;
        ans=ans*((n+1)%mod)%mod;
        ans=ans*((4*n-1)%mod)%mod;
        ans=ans*inv6%mod;
        cout<<ans<<endl;
    }
    return 0;
}