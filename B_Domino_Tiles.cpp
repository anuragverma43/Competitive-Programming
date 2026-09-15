#include<bits/stdc++.h>
using namespace std;
#define ll long long
int mod=998244353;

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
        vector<string>p={"0011","0110","1001","1100"};
        int ans=0;
        for(int i=0;i<4;i++){
            bool ok=true;
            for(int j=0;j<n;j++){
                char c=p[i][j%4];
                if(s[j]!='?' && s[j]!=c){
                    ok=false;
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