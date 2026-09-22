#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll a,b,c;
        cin>>a>>b>>c;
        if(a>=b){
            cout<<(a-b)+c<<endl;
        }
        else{
            ll d=b-a;
            ll rem=c-d;
            cout<<max(d,rem)<<endl;
        }
    }
    return 0;
}