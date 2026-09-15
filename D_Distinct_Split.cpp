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
        cin>>n;
        string s;
        cin>>s;
        unordered_set<char>st;
        vector<ll>pre(n+1),suf(n+1);
        for(ll i=1;i<=n;i++){
            st.insert(s[i-1]);
            pre[i]=st.size();
        }
        st.clear();
        for(ll i=n;i>=1;i--){
            st.insert(s[i-1]);
            suf[i]=st.size();
        }
        ll ans=0;
        for(ll i=1;i<n;i++){
            ans=max(ans,pre[i]+suf[i+1]);
        }
        cout<<ans<<endl;
    }
    return 0;
}