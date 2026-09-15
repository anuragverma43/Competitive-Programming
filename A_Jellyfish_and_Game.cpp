#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,m,k;
        cin>>n>>m>>k;
        ll a[n],b[m];
        ll mx_a=0,mx_b=0,mn_a=1e18,mn_b=1e18;
        ll suma=0,sumb=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            mx_a=max(mx_a,a[i]);
            mn_a=min(mn_a,a[i]);
            suma+=a[i];
        }
        for(ll i=0;i<m;i++){
            cin>>b[i];
            mx_b=max(mx_b,b[i]);
            mn_b=min(mn_b,b[i]);
            sumb+=b[i];
        }
        if(mx_b > mn_a){
            suma = suma - mn_a + mx_b;
            mx_a = max(mx_a,mx_b);
            mn_b = min(mn_b,mn_a);
        }
        if(k%2==0){
            ll loss = max(mx_a,mx_b) - min(mn_a,mn_b);
            suma -= loss;
        }
        cout<<suma<<endl;
    }
    return 0;
}