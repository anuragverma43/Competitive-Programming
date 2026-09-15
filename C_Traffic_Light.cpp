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
        char c;
        cin>>c;
        string s;
        cin>>s;
        if(c=='g'){
            cout<<0<<endl;
        }
        else{
            s=s+s;
            vector<int>v(2*n);
            int last=-1;
            for(int i=v.size()-1;i>=0;i--){
                if(s[i]=='g'){
                    last=i;
                }
                v[i]=last;
            }
            int ans=0;
            for(int i=0;i<s.size();i++){
                if(s[i]==c){
                    ans=max(ans,v[i]-i);
                }
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}