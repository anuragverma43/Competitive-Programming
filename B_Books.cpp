#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n,t;
    cin>>n>>t;
    vector<ll>a(n);
    for(int i=0;i<n;i++){
        cin>>a[i];
    }
    ll sum=0,maxi=0,i=0;
    for(ll j=0;j<n;j++){
        sum+=a[j];
        while(sum>t){
            sum=sum-a[i];
            i++;
        }
        maxi=max(maxi,(j-i+1));
    }
    cout<<maxi<<endl;
    return 0;
}