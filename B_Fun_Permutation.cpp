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
        vector<int>q;
        for(int i=0;i<n;i++){
            q.push_back(n+1-a[i]);
        }
        for(int i=0;i<q.size();i++){
            cout<<q[i]<<" ";
        }
        cout<<endl;
    }

    return 0;
}