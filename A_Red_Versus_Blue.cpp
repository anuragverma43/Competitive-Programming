#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;
    while(t--){
        ll n,r,b;
        cin>>n>>r>>b;
        ll group=r/(b+1);
        ll rem=r%(b+1);
        for(ll i=0;i<b+1;i++){
            for(ll j=0;j<group;j++){
                cout<<'R';
            }
            if(rem>0){
                cout<<'R';
                rem--;
            }
            if(i<b){
                cout<<'B';
            }
        }
        cout<<endl;
    }
    return 0;
}