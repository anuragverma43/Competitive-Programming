#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        if(2*k>n){
            cout<<-1<<endl;
        }
        else{
            int cnt1=0,cnt2=0;
            for(int i=0;i<k;i++){
                if(s[i]=='L'){
                    cnt1++;
                }
            }
            for(int i=n-k;i<n;i++){
                if(s[i]=='R'){
                    cnt2++;
                }
            }
            cout<<cnt1+cnt2<<endl;
        }
    }
    return 0;
}