#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll x,n;
        cin>>x>>n;
        if(n%2==1){
            cout<<x<<endl;
        }
        else{
            cout<<0<<endl;
        }
    }
    return 0;
}