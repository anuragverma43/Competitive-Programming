#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll n;
        cin>>n;
        string s;
        cin>>s;
        ll count=0;
        for(ll i=0;i<s.size();i++){
            if(s[i]=='1'){
                count++;
            }
        }
        ll i=0;
        while(i<n){
            if(s[i]=='0'){
                ll j=i;
                while(j<n && s[j]=='0'){
                    j++;
                }
                ll len=j-i;
                if (i==0 && j==n){
                    count+=(len+2)/3;
                }
                else if(i==0||j==n){
                    count+=(len+1)/3;
                }
                else{
                    count+=len/3;
                }
                i=j;
            }
            else{
                i++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}