#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    ll s,n;
    cin>>s>>n;
    vector<pair<ll,ll>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    for(int i=0;i<n;i++){
        if(s>v[i].first){
            s=s+(v[i].second);
        }
        else{
            cout<<"NO"<<endl;
            return 0;
        }
    }
    cout<<"YES"<<endl;   
}
