#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<ll>a(n);
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    bool o=false,e=false;
    for(ll i=0;i<n;i++){
        if(a[i]%2==1){
            o=true;
        }
        else{
            e=true;
        }
    }
    if(o && e){
        sort(a.begin(),a.end());
    }
    for(ll i=0;i<n;i++){
        cout<<a[i]<<" ";
    }
    cout<<endl;
    return 0;
}