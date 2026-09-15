#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    ll sum=0;
    ll count=0;
    ll a[n+1];
    for(int i=1;i<=n;i++){
        cin>>a[i];
        sum=sum+a[i];
    }
    vector<int>index;
    bool ok=false;
    for(int i=1;i<=n;i++){
        if(n>1 && (sum-a[i])%(n-1)==0 && (sum-a[i])/(n-1)==a[i]){
            index.push_back(i);
            count++;
            ok=true;
        }
    }
    if(ok){
        cout<<count<<endl;
        for(int i:index){
            cout<<i<<" ";
        }
        cout<<endl;
    }
    else{
        cout<<0<<endl;
    }
    return 0;
}