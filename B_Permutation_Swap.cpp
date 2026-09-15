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
        ll p[n];
        for(ll i=1;i<=n;i++){
            cin>>p[i];
        }
        ll ans=0;
        for(ll i=1;i<=n;i++){
            ans=__gcd(ans, abs(p[i]-i));
        }
        cout<<ans<<endl;
    }
    return 0;
}        