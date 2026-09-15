#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll x;
    cin>>x;
    ll mn=x;
    vector<ll>digit;
    while(x>0){
        ll d=x%10;
        digit.push_back(d);
        x=x/10;
    }
    ll mx=0;
    for(int i=0;i<digit.size();i++){
        mx=max(mx,digit[i]);
    }
    mx=9-mx;
    for(int i=0;i<digit.size();i++){
        cout<<digit[i];
    }
    cout<<endl;
    return 0;
}