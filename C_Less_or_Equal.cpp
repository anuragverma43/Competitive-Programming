#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    ll a[n];
    for(ll i=0;i<n;i++){
        cin>>a[i];
    }
    sort(a,a+n);
    if(k==0){
        if(a[0]==1){
            cout<<-1;
        }
        else{
            cout<<1;
        }
    }
    else{
        int x=a[k-1];
        if(k<n && a[k]==x){
            cout<<-1;
        }
        else{
            cout<<x;
        }
    }
    return 0;
}