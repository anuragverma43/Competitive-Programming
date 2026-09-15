#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){

    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,m;
        cin>>n>>m;
        vector<ll>a(n);
        ll sum=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<m;i++){
            ll x;
            cin>>x;
            sort(a.begin(),a.end());
            a[0]=x;
        }
        for(auto x : a){
            sum+=x;
        }
        cout<<sum<<endl;
    }

    return 0;
}