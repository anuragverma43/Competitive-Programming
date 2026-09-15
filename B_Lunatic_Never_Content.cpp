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
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll gc=0;
        for(int i=0;i<n;i++){
            gc=__gcd(gc,abs(a[i]-a[n-1-i]));
        }
        cout<<gc<<endl;
    }
    return 0;
}