#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll j=2;
        while(true){
            bool ok=false;
            for(ll i=0;i<n;i++){
                if(__gcd(a[i],j)==1) {
                    ok=true;
                    break;
                }
            }
            if(ok){
                cout<<j<<endl;
            break;
            }
            j++;
        }
    }
    return 0;
}