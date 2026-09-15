#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll lcm(ll x,ll y){
    int result=(x*y)/__gcd(x,y);
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll a,b;
        cin>>a>>b;
        if(a==1){
            cout<<b*b<<endl;
        }
        else if(b%a!=0){
            cout<<lcm(a,b)<<endl;
        }
        else{
            cout<<lcm(a,b)*(b/a)<<endl;
        }
    }

    return 0;
}