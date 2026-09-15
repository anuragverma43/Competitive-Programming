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
        ll a[n];
        ll mx=0;
        ll mn=1e18;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mx=max(mx,a[i]);
            mn=min(mn,a[i]);
        }
        cout<<(mx-mn+1)/2<<endl;
       
    }

    return 0;
}