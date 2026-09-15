#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        ll a[n];
        for(ll i=1;i<=n;i++){
            cin>>a[i];
        }
        vector<ll>pref(n+1,0),suf(n+2,0);
        for(ll i=1;i<=n;i++){
            pref[i]=pref[i-1]+abs(a[i]);
        }
        for(ll i=n;i>=1;i--){
            suf[i]=suf[i+1]+a[i];
        }
        ll best=suf[1];
        ll pos=-1;
        for(ll i=1;i<=n;i++){
            if(a[i]>0){
                ll cur=pref[i-1]-a[i]+suf[i+1];
                if(cur>best){
                    best=cur;
                    pos=i;
                }
            }
        }
        vector<ll>state(n+2,0);
        if(pos!=-1){
            state[pos]=1;
            for(ll i=1;i<pos;i++){
                if(a[i]<0){
                    state[i]=1;
                }
            }
        }
        vector<ll>S;
        for(ll i=1;i<=n;i++){
            if(state[i]!=state[i+1]){
                S.push_back(i);
            }
        }
        vector<ll>ans;
        if(!S.empty()){
            ll head=S.back();
            vector<ll>nxt(n+1,-1);
            for(ll i=(ll)S.size()-2;i>=0;i--){
                ll u=S[i];
                if(a[u]>0){
                    nxt[u]=head;
                    head=u;
                }
                else{
                    nxt[u]=nxt[head];
                    nxt[head]=u;
                }
            }
            for(ll cur=head;cur!=-1;cur=nxt[cur]){
                ans.push_back(cur);
            }
        }
        cout<<ans.size()<<endl;
        for(ll i=0;i<(ll)ans.size();i++){
            if(i){
                cout<<" ";
            }
            cout<<ans[i];
        }
        cout<<endl;
    }
    return 0;
}