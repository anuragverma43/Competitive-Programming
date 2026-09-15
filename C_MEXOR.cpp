#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        ll target=k^n;
        if(target==0){
            cout<<"YES"<<endl;
            for(int i=0;i<n;++i){
                cout<<i<<(i==n-1?"":" ");
            }
            cout<<endl;
        }
        if(target<n){
            cout<<"YES"<<endl;
            vector<int>p(n);
            iota(p.begin(),p.end(),0);
            swap(p[0],p[target]);
            for (int i=0;i<n;++i){
                cout<<p[i]<<(i==n-1?"":" ");
            }
            cout<<endl;
        }
        cout<<"NO"<<endl;
    }
}