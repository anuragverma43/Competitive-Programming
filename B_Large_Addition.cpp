#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        string s;
        cin>>s;
        if(s[0]!='1'){
            cout<<"NO"<<endl;
        }
        else if(s[s.size()-1]=='9'){
            cout<<"NO"<<endl;
        }
        else{
            bool ok=true;
            for(ll i=1;i<s.size()-1;i++){
                if(s[i]=='0'){
                    ok=false;
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
    return 0;
}