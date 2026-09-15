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
        vector<ll>b;
        b.push_back(a[0]);
        for(ll i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                b.push_back(a[i]);
            }
        }
        ll p=0,q=0;
        for(ll i=1;i<b.size()-1;i++){
            if(b[i]>b[i-1] && b[i]>b[i+1]){
                p++;
            }
            if(b[i]<b[i-1] && b[i]<b[i+1]){
                q++;
            }
        }
        if(b.size()==1){
            cout<<1<<endl;
        }
        else{
            cout<<(p+q+2)<<endl;
        }
    }
    return 0;
}