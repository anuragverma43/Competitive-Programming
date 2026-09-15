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
        int maxi=max_element(a.begin(),a.end())-a.begin();
        int mini=min_element(a.begin(),a.end())-a.begin();
        string s;
        for(int i=0;i<n;i++){
            if(i<mini){
                s.push_back('1');
            }
            else{
                s.push_back(0)
            }
        }

    }

    return 0;
}