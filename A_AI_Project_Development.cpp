#include <bits/stdc++.h>
using namespace std;
#define ll long long

ll req(ll a,ll b){
    return (a+b-1)/b;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        ll n,x,y,z;
        cin>>n>>x>>y>>z;
        ll t1=req(n,x+y);
        ll t2=0;
        if(z*x>=n){
            t2=req(n,x);
        }
        else{
            ll rem=n-z*x;
            t2=z+req(rem,x+10*y);
        }
        cout<<min(t1,t2)<<endl;
    }
    return 0;
}