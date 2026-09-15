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
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                cnt++;
            }
        }
        if(cnt>(n-1)/2){
            cout<<"Bessie"<<endl;
        }
        else{
            cout<<"Elsie"<<endl;
        }
    }
    return 0;
}