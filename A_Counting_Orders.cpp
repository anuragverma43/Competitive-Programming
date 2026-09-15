#include<bits/stdc++.h>
using namespace std;
#define ll long long
const ll mod=1e9+7;

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a,a+n);
        sort(b,b+n);
        ll ans=1;
        for(int i=0;i<n;i++){
            ll count=lower_bound(b+i,b+n,a[i])-(b+i);
                ans=(ans*count)%mod;
        }
        cout<<ans<<endl;
    }
    return 0;
}