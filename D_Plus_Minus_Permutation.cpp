#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        ll lcm=(x*y)/__gcd(x,y);
        ll c1=n/x-n/lcm, c2=n/y-n/lcm;;
        ll psum=c1*(2*n-c1+1)/2;
        ll nsum=c2*(c2+1)/2;
        cout<<psum-nsum<<endl;
    }

    return 0;
}