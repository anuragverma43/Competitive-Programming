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
        ll count=1;
        for(int i=1;i<n;i++){
            count+=(n/i)*(n/i);
        }
        cout<<count<<endl;
    }
    return 0;
}