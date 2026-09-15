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
        set<char>st;
        ll ans=0;
        for(int i=0;i<n;i++){
            st.insert(s[i]);
            ans+=st.size();
        }
        cout<<ans<<endl;
    }
    return 0;
}