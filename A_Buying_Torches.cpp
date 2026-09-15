#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll x,y,k;
        cin>>x>>y>>k;
        ll req=k+k*y-1;
        ll s=(req+(x-2))/(x-1);
        cout<<s+k<<endl;
    }
    return 0;
}