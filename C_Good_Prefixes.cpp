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
        vector<ll>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        ll ans=0,sum=0;
        map<ll,ll>freq;
        for(int i=0;i<n;i++){
            sum+=a[i];
            freq[a[i]]++;
            if(sum%2==0 && freq.count(sum/2)){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}