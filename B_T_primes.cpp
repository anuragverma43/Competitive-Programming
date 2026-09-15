#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool prime(ll x){
    if(x<2){
        return false;
    }
    for(ll i=2;i*i<=x;i++){
        if(x%i==0){
            return false;
        }
    }
    return true;
}
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll n;
    cin>>n;
    while(n--){
        ll p;
        cin>>p;
        ll r=sqrt(p);
        if(r*r==p && prime(r)){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}