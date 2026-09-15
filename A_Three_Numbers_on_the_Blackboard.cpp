#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        ll x=max(a,max(b,c));
        ll y=min(a,min(b,c));
        ll z=a+b+c-x-y;
        cout<<min(x-y,z)<<endl;
    }
    return 0;
}