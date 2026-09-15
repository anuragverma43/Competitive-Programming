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
        ll maxi=0,mn=1e9;
        for(ll i=0;i<n;i++){
            maxi=max(maxi,a[i]);
            mn=min(mn,a[i]);
        }
        cout<<(maxi-mn)+1<<endl;
    }
    return 0;
}