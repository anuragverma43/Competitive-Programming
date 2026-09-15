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
        if(n==2){
            cout<<-1<<endl;
        }
        else if(n==1){
            cout<<1<<endl;
        }
        else{
            ll x=1;
            cout<<1<<" "<<2<<" ";
            x=3;
            for(int i=3;i<=n;i++){
                cout<<x<<" ";
                x=x*2;
            }
            cout<<endl;
        }
    }
    return 0;
}