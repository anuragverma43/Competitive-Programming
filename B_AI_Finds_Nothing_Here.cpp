#include<bits/stdc++.h>
using namespace std;
#define ll long long

ll power(ll a, ll b){
    ll result=1;
    a=a%998244353;
    while(b>0){
        if(b%2==1){ 
            result=(result*a)%998244353;    
        }
        a=(a*a)%998244353;
        b=b/2;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,m,r,c;
        cin>>n>>m>>r>>c;
        if(n==1 && m==1){
            cout<<1<<endl;
        }
        else{
            ll eqn=((n*m)-(n-r+1)*(m-c+1));
            cout<<power(2,eqn)<<endl;
        }
    }
    return 0;
}