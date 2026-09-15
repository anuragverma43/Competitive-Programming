#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    vector<pair<int,int>>v(n);
    for(int i=0;i<n;i++){
        cin>>v[i].first>>v[i].second;
    }
    sort(v.begin(),v.end());
    bool ok=false;
    for(int i=0;i<n-1;i++){
        if(v[i+1].second < v[i].second){
            ok=true;
        }
    }
    if(ok){
        cout<<"Happy Alex"<<endl;
    }
    else{
        cout<<"Poor Alex"<<endl;
    }
    return 0;
}