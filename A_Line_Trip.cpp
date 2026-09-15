#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,x;
        cin>>n>>x;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int diff=0;
        diff=max(diff,a[0]);
        for(int i=0;i<n-1;i++){
            diff =max(diff,a[i+1]-a[i]);
        }
        int d=2*(x-a[n-1]);
        cout<<max(diff,d)<<endl;
    }
    return 0;
}