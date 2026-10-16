#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int x;
        cin>>x;
        if(x%2==0){
            cout<<x/2<<endl;
        }
        else{
            cout<<2*x*1LL<<endl;
        }
    }
    return 0;
}