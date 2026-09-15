#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        ll a[n];
        for(ll i=1;i<= n;i++){
            cin>>a[i];
        }
        vector<ll>ans;
        bool ok=false;
        for(ll i=n;i>=1;i--){
            ll cur=a[i];
            if(ok){
                cur=-cur;
            }
            if(cur>0){
                ans.push_back(i);
                ok=!ok;
            }
        }
        cout<<ans.size()<<endl;
        for(ll x:ans){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}