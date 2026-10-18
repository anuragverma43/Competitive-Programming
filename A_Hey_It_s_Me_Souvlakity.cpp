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
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                cnt++;
            }
        }
        if(cnt==2){
            cout<<1<<endl;
        }
        else{
            int id1=-1,id2=-1;
            for(int i=0;i<n;i++){
                if(s[i]=='1'){
                    id1=i;
                    break;
                }
            }
            for(int i=n-1;i>=0;i--){
                if(s[i]=='1'){
                    id2=i;
                    break;
                }
            }
            cout<<id2-id1<<endl;
        }
    }
    return 0;
}