#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n,x;
        cin>>n>>x;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=0;
        ll smallest=a[0]-x;
        ll biggest=a[0]+x;
        for(int i=0;i<n;i++){
            ll n1=max(smallest,a[i]-x);
            ll n2=min(biggest,a[i]+x);
            if(n1>n2){
                ans++;
                smallest=a[i]-x;
                biggest=a[i]+x;
            }
            else{
                smallest=n1;
                biggest=n2;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}