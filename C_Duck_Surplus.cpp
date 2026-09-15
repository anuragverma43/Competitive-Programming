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
        ll maxi=a[0];
        for(int i=1;i<n;i++){
            if(a[i]<maxi){
                maxi+=a[i];
            }
            else {
                maxi=a[i];
            }
        }
        cout<<maxi<<endl;
    }
    return 0;
}