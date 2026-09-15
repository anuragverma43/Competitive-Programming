#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll n;
    cin>>n;
    map<string,ll>mpp;
    for(int i=0;i<n;i++){
        string s;
        int x;
        cin>>s>>x;
        mpp[s]+=x;
    }
    
    return 0;
}