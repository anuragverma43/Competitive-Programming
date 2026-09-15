#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        vector<pair<ll,ll>>v(n);
        for(ll i=0;i<n;i++){
            v[i]={a[i],i+1};
        }
        sort(v.begin(),v.end());
        ll count=0;
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                if(v[i].first*v[j].first>2*n){
                    break;
                }
                if(v[i].second+v[j].second==v[i].first*v[j].first){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}