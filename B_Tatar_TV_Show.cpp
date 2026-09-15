#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        bool ok=true;
        for(ll i=0;i<k;i++){
            ll count=0;
            for(ll j=i;j<n;j+=k){
                if(s[j]=='1'){
                    count++;
                }
            }
            if(count%2==1){
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}