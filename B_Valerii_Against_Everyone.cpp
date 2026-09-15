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
        vector<int>b(n);
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        set<int>s;
        for(int i=0;i<n;i++){
            s.insert(b[i]);
        }
        if(s.size()==n){
            cout<<"NO"<<endl;
            continue;
        }
        cout<<"YES"<<endl;
    }
    return 0;
}