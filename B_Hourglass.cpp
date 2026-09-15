#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll s,k,m;
        cin>>s>>k>>m;
        ll n=m/k;
        ll rem=m%k;
        ll ans=0;
        if(k>=s){
            cout<<max(ans,s-rem)<<endl;
        }
        else{
            if(n%2==0){
                ans=s-rem;
            }
            else{
                ans=k-rem;
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}