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
        int sum=a[0];
        int mn=a[0];
        for(int i=1;i<n;i++){
            mn=min(mn,a[i]);
            sum=sum+mn;
        }
        cout<<sum<<endl;
    }

    return 0;
}