#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--) {
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++) {
            cin>>a[i];
        }
        ll first=-1;
        ll ans=n;
        for(ll i=0;i<n;i++) {
            if(a[i]!=a[0]){
                ans=min(ans,i-first-1);
                first=i;
            }
        }
        ans=min(ans,n-first-1);
        if(ans==n){
            cout<<-1<<endl;
        }
        else{
            cout<<ans<<endl;
        }
    }
    return 0;
}