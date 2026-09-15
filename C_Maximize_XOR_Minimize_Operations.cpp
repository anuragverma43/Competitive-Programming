#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll x,y;
        cin>>x>>y;
        ll maxi=0,op=0;
        for(ll i=0;i<=x;i++){
            ll cur=(x-i)^(y+i);
            if(cur>maxi){
                maxi=cur;
                op=i;
            }
        }
        cout<<maxi<<" "<<op<<endl;
    }
    return 0;
}