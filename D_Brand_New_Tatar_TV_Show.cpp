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
        vector<ll>a(n);
        for(ll i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        vector<ll>value,count;
        for(ll i=0;i<n;i++){
            if(i==0 || a[i]!=a[i-1]){
                value.push_back(a[i]);
                count.push_back(1);
            }
            else{
                count.back()++;
            }
        }
        ll m=value.size();
        vector<bool>win(m,false);
        vector<ll>lose(m+1,0);
        bool ok=false;
        for(ll i=value.size()-1;i>=0;i--){
            ll r=upper_bound(value.begin(),value.end(),value[i]+k)-value.begin()-1;
            if(count[i]%2==0){
                win[i]=true;
            } 
            else{
                ll x=lose[i+1]-lose[r+1];
                if(x>0){
                    win[i]=true;
                }
                else{
                    win[i]=false;
                }
            }
            lose[i]=lose[i+1];
            if (!win[i]){
                lose[i]++;
            }
            if(win[i]){
                ok=true;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}