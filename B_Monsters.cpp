#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        ll n,k;
        cin>>n>>k;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<pair<int,int>>remain;
        for(int i=0;i<n;i++){
            int r=a[i]%k;
            if(r==0){
                r=k;
            }
            remain.push_back({r,i+1});
        }
        sort(remain.begin(),remain.end(),[](auto &x,auto &y){
            if(x.first==y.first) return x.second< y.second;
            return x.first >y.first;
        });
        for(auto &p:remain){
            cout<<p.second<< " ";
        }
        cout<<endl;
    }
    return 0;
}