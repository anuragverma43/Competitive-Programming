#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n,k;
        cin>>n>>k;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=0;
        if(k==1){
            for(int i=0;i<n;i++){
                ans+=a[i];
            }
        }
        else if(2*k<=n){
            for(int i=0;i<k-1;i++){
                ans+=max(a[i],a[n-1-i]);
            }
            for(int i=k-1;i<=n-k;i++){
                ans+=a[i];
            }
        }
        else{
            for(int i=0;i<n-k+1;i++){
                ans+=max(a[i],a[n-1-i]);
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}