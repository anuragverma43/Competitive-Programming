#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin>>n;
        vector<ll>b(n);
        for(ll i=0;i<n;i++){
            cin>>b[i];
        }
        sort(b.rbegin(), b.rend());
        bool ok=true;
        for(ll i=2;i<n;i++){
            if(b[i-2]%b[i-1]!=b[i]){
                ok=false;
                break;
            }
        }
        if(!ok){
            cout<<-1<<endl;
        }
        else{
            cout<<b[0]<<" "<<b[1]<<endl;
        }
    }
    return 0;
}