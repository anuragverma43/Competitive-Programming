#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,k;
        cin>>n>>k;
        if(n==k){
            cout<<2<<endl;
        }
        else if(k==1){
            cout<<1<<endl;
        }
        else{
            cout<<max(n,n%k)<<endl;
        }
    }
    return 0;
}