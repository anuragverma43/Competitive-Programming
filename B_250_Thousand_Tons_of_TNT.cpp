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
        cin>>n;;
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=0;
        for(int i=0;i<n;i++){
            if(n%(i+1)){
                continue;
            }
            ll sum=0,maxi=0,mini=1e18;
            for(int j=0;j<n;j++){
                sum+=a[j];
                if((j+1)%(i+1)==0){
                    mini=min(mini,sum);
                    maxi=max(maxi,sum);
                    sum=0;
                }
            }
            ans=max(ans,maxi-mini);   
        }
        cout<<ans<<endl;
    }
    return 0;
}