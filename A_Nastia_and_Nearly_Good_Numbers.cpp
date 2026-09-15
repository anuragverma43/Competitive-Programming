#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll a,b;
        cin>>a>>b;
        if(b==1){
            cout<<"NO"<<endl;
        }
        else if(b==2){
            cout<<"YES"<<endl<<a<<" "<<3*a<<" "<<4*a<<endl;
        }
        else{
            cout<<"YES"<<endl<<a<<" "<<a*(b-1)<<" "<<a*b<<endl;
        }
    }
    return 0;
}