#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,m,a,b;
    cin>>n>>m>>a>>b;
    if(m>n){
        cout<<min(b,n*a)<<endl;
    }
    else{
        ll p=n/m;
        ll r=n%m;
        cout<<min((p*b+r*a),min(n*a,((n+m-1)/m)*b))<<endl;
    }
    return 0;
}