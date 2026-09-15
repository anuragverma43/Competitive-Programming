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
        ll c1=0,c0=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='0'){
                c0++;
            }
            else{
                c1++;
            }
        }
        ll length_t=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='0' && c1>0){
                c1--;
                length_t++;
            }
            else if(s[i]=='1' && c0>0){
                c0--;
                length_t++;
            }
            else{
                break;
            }
        }
        cout<<s.size()-length_t<<endl;
    }

    return 0;
}