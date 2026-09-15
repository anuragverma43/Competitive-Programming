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
        vector<ll>a(n);
        ll cost=0;
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        for(ll i=0;i<n;i++){
            if(a[i]>1){
                cost=cost+a[i];
            }
        }
        if(a.back()==1){
                cost++;
        }
        cout<<cost<<endl;
    }
    return 0;
}