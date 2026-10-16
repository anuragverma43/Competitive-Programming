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
        int cnt=0,c1=0,maxi=0;
        for(int i=0;i<s.size();i++){
            if(s[i]=='.'){
                c1++;
                cnt++;
                maxi=max(maxi,cnt);   
            }
            else{
                cnt=0;
            }
        }
        if(maxi>=3){
            cout<<2<<endl;
        }
        else{
            cout<<c1<<endl;
        }
    }
    return 0;
}