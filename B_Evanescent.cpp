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
        string s;
        cin>>s;
        int comp=0,cnt=0;
        for(int i=0;i<n;i++){
            if(s[i-1]!=s[i]){
                comp++;
            }
        }
        for(int i=1;i<n-1;i++){
            if(s[i-1]!=s[i] && s[i]!=s[i+1]){
                if(s[i-1]==s[i+1]){
                    cnt=2;
                }
                cnt=max(cnt,1);
            }
        }
        int ans=comp-cnt;
        cout<<ans<<endl;
    }
    return 0;
}