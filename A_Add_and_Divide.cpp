#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        ll a,b;
        cin>>a>>b;
        ll ops=0;
        ll ans=1e18;
        if(a<b){
            cout<<1<<endl;
        }
        else if(a==b){
            cout<<2<<endl;
        }
        else{
            for(ll i=0;i<=100;i++){
                ll newb=b+i;
                if(newb==1){
                    continue;
                }
                ll temp=a;
                ll ops=i;
                while(temp>0){
                    temp/=newb;
                    ops++;
                }
                ans=min(ans,ops);
            }
            cout<<ans<<endl;
        }
    }
    return 0;
}