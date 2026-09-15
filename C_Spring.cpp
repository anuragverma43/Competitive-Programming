#include<bits/stdc++.h>
using namespace std;
#define ll long long
ll LCM(ll x,ll y){
    ll lcm=(x*y)/__gcd(x,y);
    return lcm;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll a,b,c,m;
        cin>>a>>b>>c>>m;
        ll t=m/LCM(a,LCM(b,c));
        ll a1=m/LCM(a,b)-t;
        ll a2=m/LCM(b,c)-t;
        ll a3=m/LCM(a,c)-t;
        ll alice=2*t+3*(a1+a3)+6*((m/a)-(t+a1+a3));
        ll bob=2*t+3*(a1+a2)+6*((m/b)-(t+a1+a2));
        ll carol=2*t+3*(a3+a2)+6*((m/c)-(t+a2+a3));
        cout<<alice<<" "<<bob<<" "<<carol<<endl;
    }
    return 0;
}