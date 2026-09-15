#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<ll>p(n+1);
        for(ll i=0;i<n;i++){
            p[i+1]=p[i]+a[i];
        }
        ll ans=0;
        for(ll i=0;i<=k;i++){
            ll l=2*i;
            ll r=n-(k-i);
            ll cur=p[r]-p[l];
            ans=max(ans,cur);
        }
        cout<<ans<<endl;
    }
    return 0;
}