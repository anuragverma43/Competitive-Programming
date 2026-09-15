#include<bits/stdc++.h>
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
        map<ll,ll>mpp;
        ll x;
        ll maxi=0;
        for(ll i=0;i<n;i++){
            cin>>x;
            mpp[x]++;
            maxi=max(maxi,mpp[x]);
        }
        ll count=maxi;
        ll ans=0;
        while(count<n){
            ll take=min(count,n-count);
            ans+=1;
            ans+=take;
            count+=take;
        }
        cout<<ans<<endl;
    }
    return 0;
}