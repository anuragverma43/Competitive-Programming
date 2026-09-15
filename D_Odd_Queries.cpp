#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n,q;
        cin>>n>>q;
        vector<int>a(n+1);
        vector<int>p(n+1);
        for(int i=1;i<=n;i++){
            cin>>a[i];
            p[i]=p[i-1]+a[i];
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            ll ans=p[l-1]+(r-l+1)*k+(p[n]-p[r]);
            if(ans%2==0){
                cout<<"NO"<<endl;
            }
            else{
                cout<<"YES"<<endl;
            }
        }
    }
    return 0;
}