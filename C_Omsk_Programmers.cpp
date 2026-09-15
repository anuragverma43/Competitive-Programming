#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll a,b,x;
        cin>>a>>b>>x;
        vector<ll>st_a,st_b;
        while(a){
            st_a.push_back(a);
            a=a/x;
        }
        st_a.push_back(0);
        while(b){
            st_b.push_back(b);
            b=b/x;
        }
        st_b.push_back(0);
        ll ans=1e18;
        for(ll i=0;i<st_a.size();i++){
            for(ll j=0;j<st_b.size();j++){
                ll cost=i+j+abs(st_a[i]-st_b[j]);
                ans=min(ans,cost);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}