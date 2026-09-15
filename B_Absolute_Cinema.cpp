#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;

    while(t--){
        ll n;
        cin>>n;
        ll a[n],b[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        ll Msum=0;
        ll m_req= 0;
        for (ll i=0;i<n;i++) {
            Msum+=max(a[i],b[i]);
            m_req=max(m_req, min(a[i],b[i]));
        }
        cout<<Msum+m_req<<endl;
    }
    return 0;
}