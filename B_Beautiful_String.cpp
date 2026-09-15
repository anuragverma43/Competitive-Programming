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
        string s;
        cin>>s;
        vector<int>p;
        for(int i=0;i<n;i++){
            if(s[i]=='0'){
                p.push_back(i+1);
            }
        }
        cout<<p.size()<<endl;
        for(int x:p){
            cout<<x<<" ";
        }
        cout<<endl;

    }

    return 0;
}