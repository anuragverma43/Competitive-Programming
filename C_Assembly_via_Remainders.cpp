#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector<ll>x(n-1);
        for(int i=0;i<n-1;i++){
            cin>>x[i];
        }
        vector<ll>a(n);
        a[0]=501;
        for(int i=1;i<n;i++){
            a[i]=a[i-1]+x[i-1];
        }
        for(ll x:a){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}