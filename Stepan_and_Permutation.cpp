#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,x,y;
        cin>>n>>x>>y;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        bool ok=true;
        int gc=__gcd(x,y);
        for(int i=0;i<n;i++){
            if(a[i]%gc!=(i+1)%gc){
                ok=false;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}