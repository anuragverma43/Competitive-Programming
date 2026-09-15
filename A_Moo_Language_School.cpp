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
        string s;
        cin>>s;
        int ans=0;
        for(int i=0;i<n/k;i++){
            bool ok=1;
            for(int j=i*k;j<(i+1)*k;j++){
                if(s[j]=='0'){
                    ok=0;
                    break;
                }
            }
            if(ok){
                ans++;
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}