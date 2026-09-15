#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,k;
        cin>>n>>k;
        ll bits=0;
        ll cost=1;
        while(cost<=n){
            ll maxi=n/cost;
            ll take=min(maxi,k);
            bits=bits+take;
            n=n-take*cost;
            cost=cost*2;
        }
        cout<<bits<<endl;
    }
    return 0;
}