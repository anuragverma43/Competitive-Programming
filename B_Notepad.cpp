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
        map<string,ll>mp;
        bool ok=false;
        for(ll i=0;i<n-1;i++){
            string t="";
            t+=s[i];
            t+=s[i+1];
            if(mp.count(t)){
                if(i-mp[t]>=2){
                    ok=true;
                }
            }
            else{
                mp[t]=i;
            }  
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        } 
    }
    return 0;
}