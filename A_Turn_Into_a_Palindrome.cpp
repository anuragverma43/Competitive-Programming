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
        char c;
        cin>>n>>c;
        string s;
        cin>>s;
        int ans=0;
        int i=0;
        while(i<n){
            if(s[i]==s[n-1-i]){
                i++;
            }
            else{
                if((s[i]==c || s[n-1-i]==c)){
                    ans+=1;
                    i++;
                }
                else{
                    ans+=2;
                    i++;
                }
            }
        }
        cout<<ans/2<<endl;
    }
    return 0;
}