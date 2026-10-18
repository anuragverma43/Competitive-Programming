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
        vector<int>a(n);
        int maxi=0,mini=1e9;
        for(int i=0;i<n;i++){
            cin>>a[i];
            maxi=max(maxi,a[i]);
            mini=min(mini,a[i]);
        }
        if(maxi==mini){
            cout<<maxi<<endl;
        }
        else{
            int d=maxi^mini;
            int msb=-1;
            while(d>0){    
                msb++;
                d>>=1;
            }
            int ans=maxi|((1<<msb)-1);
            cout<<ans<<endl;
        }
    }
    return 0;
}