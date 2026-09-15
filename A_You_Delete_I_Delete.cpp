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
        for(int i=0;i<s.size();i++){
            if(s[i]=='0'){
                s.erase(i,1);
                break;
            }
        }
        for(int i=0;i<s.size();i++){
            if(s[i]=='1'){
                s.erase(i,1);
                break;
            }
        }
        cout<<s<<endl;
    }
    return 0;
}