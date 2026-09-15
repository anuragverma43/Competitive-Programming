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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        ll ans=0;
        for(int i=0;i<n-1;i++){
            if(i%2==0){
                ans=max(ans,a[i+1]-a[i]);
            }
        }
        cout<<ans<<endl;
    }

    return 0;
}