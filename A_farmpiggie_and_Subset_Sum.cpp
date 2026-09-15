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
        for(int i=1;i<=n;i=i+2){
            cout<<i+1<<" "<<i<<" ";
        }
        cout<<endl;
    }

    return 0;
}