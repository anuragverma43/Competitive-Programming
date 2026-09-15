#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int k,x;
        cin>>k>>x;
        for(int i=0;i<k;i++){
            x=x*2;
        }
        cout<<x<<endl;
    }

    return 0;
}