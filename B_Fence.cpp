#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,k;
    cin>>n>>k;
    vector<ll>h(n);
    for(int i=0;i<n;i++){
        cin>>h[i];
    }
    int sum=0;
    for(int i=0;i<k;i++){
        sum+=h[i];
    }
    int mn=sum;
    int ans=1;
    for(int i=k;i<n;i++){
        sum=sum+h[i]-h[i-k];
        if(sum<mn){
            mn=sum;
            ans=i-k+2;
        }
    }
    cout<<ans<<endl;
}
