#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        map<ll,ll>mpp;
        ll ans=0;
        for(ll i=0;i<n;i++){
            ll req=a[i]-i;
            ans+=mpp[req];
            mpp[req]++;
        }
        cout<<ans<<endl;
    }
    return 0;
}