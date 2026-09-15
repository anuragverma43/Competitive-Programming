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
        int maxi=0,curr=0;
        for(int i=0;i<n;i++){
            if(s[i]=='#'){
                curr++;
                maxi=max(maxi,curr);
            }
            else{
                curr=0;
            }
        }
        int ans=(maxi+2-1)/2;
        cout<<ans<<endl;
        
    }

    return 0;
}