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
        vector<ll>a(n),b(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        unordered_map<ll,ll>freq1,freq2;
        for(ll i=0;i<n;){
            ll j=i;
            while(j<n && a[j]==a[i]){
                j++;
            }
            freq1[a[i]]=max(freq1[a[i]],j-i);
            i=j;
        }
        for(ll i=0;i<n;){
            ll j=i;
            while(j<n && b[j]==b[i]){
                j++;
            }
            freq2[b[i]]=max(freq2[b[i]],j-i);
            i=j;
        }
        ll ans=0;
        for(ll x=1;x<=2*n;x++){
            ans=max(ans,freq1[x]+freq2[x]);
        }
        cout<<ans<<endl;
    }
    return 0;
}