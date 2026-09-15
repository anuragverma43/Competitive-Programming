#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin>>n;
        if(n==2){
            cout<<"1 2 1 2 2 1 1 2\n";
            continue;
        }
        for(ll i=1;i<=n;i++){
            cout<<i<<" ";
        }
        for(ll i=1;i<=n;i++){
            cout<<i<<" ";
        }
        cout<<n<<" ";
        for(ll i=1;i<n;i++){
            cout<<i<<" ";
        }
        for(ll i=n-2;i<=n;i++){
            cout<<i<<" ";
        }
        for(ll i=1;i<=n-3;i++){
            cout<<i<<" ";
        }
        cout <<endl;;
    }
    return 0;
}