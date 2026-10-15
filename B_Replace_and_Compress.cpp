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
        bool ok1=false,ok2=false;
        for(int i=1;i<s.size()-1;i++){
            if(s[i]!=s[i-1] && s[i]!=s[i+1]){
                ok1=true;
            }
            if(s[i]==s[i-1] && s[i]==s[i+1]){
                ok2=true;
            }
        }
        if(!ok1 && !ok2){
            cout<<1<<endl;
        }
        else if((!ok1 && ok2)||(ok1 && !ok2)){
            cout<<2<<endl;
        }
        else{
            cout<<3<<endl;
        }
    }

    return 0;
}