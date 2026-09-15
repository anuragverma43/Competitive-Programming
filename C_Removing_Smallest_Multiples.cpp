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
        int ans=0;
        for(int i=1;i<=n;i++){
            for(int j=i;j<=n;j+=i){
                if(s[j-1]=='0'){
                    ans+=i;
                    s[j-1]=2;
                }
                else{
                    break;
                }
            }
        }
        cout<<ans<<endl;
    }
    return 0;
}