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
        ll gc1=0,gc2=0;
        for(int i=0;i<n;i=i+2){
            gc1=__gcd(gc1,a[i]);
        }
        for(int i=1;i<n;i=i+2){
            gc2=__gcd(gc2, a[i]);
        }
        bool ok=true;
        for(int i=0;i<n;i=i+2){
            if(a[i]%gc2==0){
                ok=false;
                break;
            }
        }
        if(ok){
            cout<<gc2<<endl;
            continue;
        }
        bool x=true;
        for(int i=1;i<n;i=i+2){
            if(a[i]%gc1==0){
                x=false;
                break;
            }
        }
        if(x){
            cout<<gc1<<endl;
            continue;
        }
        cout<<0<<endl;
    }
    return 0;
}