#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        bool ok=false;
        for(ll i=0;i<n;i++){
            for(ll j=i+1;j<n;j++){
                if(__gcd(a[i],a[j])<=2){
                    ok=true;
                }
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