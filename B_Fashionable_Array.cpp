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
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        unordered_map<int,int>freq;
        vector<pair<int,int>>v;
        for(int i=0;i<n;i++){
            freq[a[i]]++;
            v.push_back({freq[a[i]],-a[i]});
        }
        sort(v.begin(),v.end());
        for(int i=0;i<n;i++){
             cout<<-v[i].second<<" "; 
        }
        cout<<endl;
    }
    return 0;
}