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
        vector<ll>h(n);
        for(ll i=0;i<n;i++){
            cin>>h[i];
        }
        vector<ll>ans(n,0);
        for(ll i=0;i<n;i++){
            vector<ll>P(n);
            for(ll j=0;j<n;j++){
                P[j]=h[(i+j)%n];
            }
            vector<ll>pref(n),suff(n);
            pref[0]=P[0];
            for(ll j=1;j<n;j++){
                pref[j]=max(pref[j-1],P[j]);
            }
            suff[n-1]=P[n-1];
            for(ll j=n-2;j>=0;j--){
                suff[j]=max(suff[j+1],P[j]);
            }
            ll volume=0;
            for(ll j=1;j<n;j++){
                volume +=min(pref[j-1],suff[j]);
            }
            ans[i]=volume;
        }
        for(ll i=0;i<n;i++){
            cout<<ans[i];
            if(i!=n-1){
                cout<<" ";
            }
        }
        cout<<endl;
    }
    return 0;
}