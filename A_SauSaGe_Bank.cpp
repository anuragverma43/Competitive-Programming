#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n,k;
        cin>>n>>k;
        if(n==k){
            cout<<n*2<<endl;
        }
        else{
            cout<<(1LL<<(n-k+1))+2LL*(k-1)<<endl;
        }
    }

    return 0;
}