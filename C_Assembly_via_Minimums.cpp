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
        ll l=n*(n-1)/2;
        ll maxi=-1e9;
        vector<ll>b(l);
        for(ll i=0;i<l;i++){
            cin>>b[i];
            maxi=max(maxi,b[i]);
        }
        sort(b.begin(),b.end());
        vector<ll>req;
        ll id=0;
        for(ll i=0;i<n-1;i++){
            req.push_back(b[id]);
            id=id+(n-i-1);
        }
        req.push_back(maxi);
        for(ll x:req){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}