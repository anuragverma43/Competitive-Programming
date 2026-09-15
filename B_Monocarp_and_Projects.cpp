#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        ll dif=abs(y-x);
        ll ans=0;
        ll mini=min(x+k-1,dif);
        ll rem=0;
        if(x<=mini){
            for(ll i=x;i<=mini;i++){
                ans+=dif%i;
            }
            rem=mini-x+1;
        }
        ans+=(k-rem)*dif;
        cout<<ans<<endl;
    }
    return 0;
}