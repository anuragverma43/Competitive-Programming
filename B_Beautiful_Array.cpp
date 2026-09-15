#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    
    while(t--){
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        if(k*b>s){
            cout<<-1<<endl;
        }
    }

    return 0;
}