#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    
    ll x;
    cin>>x;
    ll count=0;
    while(x){
        count=count+x%2;
        x=x/2;
    }
    cout<<count<<endl;
    return 0;
}