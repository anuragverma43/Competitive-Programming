#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll factorial(ll x){
    ll fact=1;
    for(ll i=1;i<=x;i++){
        fact=fact*i;
    }
    return fact;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,k,q;
        cin>>n>>k>>q;
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        ll count=0;
        for(ll i=0;i<n;i++){
            if(a[i]<=q){
                count++;
            }
        }
        if(count==0 || count<k){
            cout<<0<<endl;
        }
        else if(count==n && count>k){
            cout<<factorial(n)<<endl;
        }
        else if(count==k){
            cout<<k<<endl;
        }
        else{
            cout<<count<<endl;
        }
    }
    return 0;
