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
        int cnt=0;
        while(1){
            int maxi=-1;
            for(int i=0;i<n;i++){
                if(s[i]!=s[n-i-1]){
                    maxi=max(maxi,(int)max(s[i],s[n-i-1]));
                }
            }
            if(maxi==-1){
                break;
            }
            for(int i=0;i<n;i++){
                if(s[i]==maxi){
                    s[i]--;
                }
            }
            cnt++;
        }
        cout<<cnt<<endl;
    }
    return 0;
}