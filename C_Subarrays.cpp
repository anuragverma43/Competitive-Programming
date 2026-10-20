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
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<ll>pref(n+1);
        for(int i=0;i<n;i++){
            pref[i+1]=(pref[i]+a[i])%k;
        }
        vector<ll>freq(k,0);
        ll count=0;
        for(int r=k+1;r<=n;r++){
            freq[pref[r-k-1]]++;
            count+=freq[pref[r]];
        }
        cout<<count<<endl;
    }
    return 0;
}