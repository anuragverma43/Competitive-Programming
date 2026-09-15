#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,d;
        cin>>n>>d;
        vector<ll>v;
        v.push_back(1);
        if(d%3==0 || n>=3){
            v.push_back(3);
        }
        if(d==5){
            v.push_back(5);
        }
        if(d==7 || n>=3){
            v.push_back(7);
        }
        if(d==9 || n>=6 ||(d%3==0 && n>=3) ){
            v.push_back(9);
        }
        for(ll x:v){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}