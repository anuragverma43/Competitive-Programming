#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        map<int,int>mp;
        for(int i=0;i<n;i++){
            cin>>a[i];
            mp[a[i]]++;
        }
        vector<int>l,r;
        for(auto it:mp){
            l.push_back(it.first);
            if(it.second>1) r.push_back(it.first);
        }
        reverse(r.begin(),r.end());
        int cnt=l.size()+r.size();
        cout<<cnt<<endl;
        for(auto x:l){
            cout<<x<<" ";
        }
        for(auto x:mp){
            for(int i=2;i<x.second;i++){
                cout<<x.first<<" ";
            }
        }
        for(auto x:r){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}