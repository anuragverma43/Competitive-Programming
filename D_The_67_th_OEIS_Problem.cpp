#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n;
        cin>>n;
        for(int i=1;i<=n;i++){
            cout<<4*i*i-1<<" ";
        }
        cout<<endl;
    }    
    return 0;
}