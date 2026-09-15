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
        vector<int>p,c;
        for(int i=0;i<n;i++){
            if(a[i]!=(i+1)){
                p.push_back(a[i]);
            }
        }
        c=p;
        sort(p.rbegin(),p.rend());
        if(p==c){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}