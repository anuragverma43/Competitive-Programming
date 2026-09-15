#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    string s;
    cin>>s;
    bool ok=true;
    for(int i=0;i<n/2;i++){
        if(s[i]!=s[n-1-i]){
            ok=false;
            break;
        }
    }
    if(ok){
        cout<<"YES"<<endl;
        cout<<1<<" "<<n-1<<endl;
    }
    else{
        cout<<"NO"<<endl;
    }
    return 0;
}