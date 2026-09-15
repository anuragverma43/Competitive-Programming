#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        vector<int>v;
        v.push_back(a);
        v.push_back(b);
        v.push_back(c);
        int ans=0;
        while(true){
            sort(v.begin(),v.end());
            if(v[0]==v[1]||v[1]==v[2]){
                break;
            }
            v[2]--;
            v[0]++;
            ans++;
        }
        cout<<ans<<endl;
    }
    return 0;
}