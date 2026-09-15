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
        vector<ll>v(n);
        for(ll i=0;i<n;i++){
            cin>>v[i];
        }
        ll ps=0;
        ll mn=1e18;
        for(ll i=0;i<n;i++){
            ps=ps+v[i];
            ll k=i+1;
            mn=min(mn,ps/k);
            cout<<mn<<" ";
        }
        cout<<endl;
    }
    return 0;
}
