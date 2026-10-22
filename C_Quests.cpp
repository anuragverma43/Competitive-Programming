#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n,k;
        cin>>n>>k;
        vector<int>a(n),b(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        int ans=0,sum=0,maxi=0;
        for(int i=0;i<min(n,k);i++){
            sum+=a[i];
            maxi=max(maxi,b[i]);
            ans=max(ans,((k-i-1)*maxi)+sum);
        }
        cout<<ans<<endl;
    }
    return 0;
}