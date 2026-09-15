#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        string s;
        cin>>s;
        ll k;
        cin>>k;
        vector<ll>v;
        ll maxi=0,mn=1e18;
        for(ll i=0;i<s.size();i++){
            maxi=max(maxi,s[i]*1LL);
            mn=min(mn,s[i]*1LL);
        }
        bool ok=false;
        while(n>0){
            v.push_back(n%10);
            n=n/10;
        }
        for(ll i=0;i<v.size();i++){
                n=n+max(maxi,v[i])*min(mn,v[i]);
                if(i==k){
                    ok=true;
                }
            }
        if(ok){
            cout<<n<<endl;
        }
    }
    return 0;
}