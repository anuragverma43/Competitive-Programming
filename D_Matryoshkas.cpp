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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        map<int,int>mp;
        for(int i=0;i<n;i++){
            mp[a[i]]++;
        }
        ll ans=0;
        for(auto it=mp.begin();it!=mp.end();it++){
            auto nxt=next(it);
            if(nxt!=mp.end() && (*nxt).first==(*it).first+1){
                ans+=min((*it).second,(*nxt).second);
            }
        }
        cout<<n-ans<<endl;
    }
    return 0;
}