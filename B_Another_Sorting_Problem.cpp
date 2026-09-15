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
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll k=0;
        for(ll i=0;i<n-1;i++){
            if(a[i]>a[i+1]){
                k=max(k,a[i]-a[i+1]);
            }
        }
        ll start=a[0];
        bool ok=true;
        for(ll i=0;i<n;i++){
            if(a[i]>=start){
                start=a[i];
            }
            else if(a[i]+k>=start){
            start=a[i]+k;
            }
            else{
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