#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a.begin(),a.end());
    ll q;
    cin>>q;
    while(q--){
        ll m;
        cin>>m;
        cout<<upper_bound(a.begin(),a.end(),m)-a.begin()<<endl;
    }
    return 0;
}