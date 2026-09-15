#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll a,b,n,s;
        cin>>a>>b>>n>>s;
        int r=s%n;
        if(r<=b && n*a+b>=s){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }

    }

    return 0;
}