#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,p;
        cin>>n>>p;
        ll a[n],b[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        vector<pair<ll,ll>>v;
        for(ll i=0;i<n;i++){
            v.push_back({b[i],a[i]});
        }
        sort(v.begin(),v.end());
        ll cost=p;
        ll inf=1;
        for(ll i=0;i<n && inf<n;i++){
            ll c=v[i].first;
            ll cap=v[i].second;
            if(c>=p){
                break;
            }
            ll T=min(cap,n-inf);
            cost=cost+T*c;
            inf=inf+T;
        }
        cost=cost+(n-inf)*p;
        cout<<cost<<endl;
    }
    return 0;
}