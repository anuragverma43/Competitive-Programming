#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,x;
        cin>>n>>x;
        ll a[n];
        ll e=0,o=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
            if(a[i]%2==0){
                e++;
            }
            else{
                o++;
            }
        }
        bool ok=false;
        for(ll i=1;i<=min(x,o);i=i+2){
            if(x-i<=e){
                ok=true;
            }
        }
        if(ok){
            cout<<"Yes"<<endl;
        }
        else{
            cout<<"No"<<endl;
        }
    }
    return 0;
}