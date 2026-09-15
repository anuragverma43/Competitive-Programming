#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        string s;
        cin>>s;

        int w=0;
        for(int i=0;i<k;i++){
            if(s[i]=='W'){
                w++;
            }
        }
        int count=w;
        for(int i=k;i<n;i++){
            if(s[i-k]=='W'){
                w--;
            }
            if(s[i]=='W'){
                w++;
            }
            count=min(count,w);
        }
        cout<<count<<endl;
    }
    return 0;
}