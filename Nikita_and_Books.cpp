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
        vector<ll>a(n+1);
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        bool ok=true;
        ll c=0;
        for(ll i=1;i<=n;i++){
            a[i]=a[i]+c;
            if(a[i]<i){
                ok=false;
            }
            c=a[i]-i;
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