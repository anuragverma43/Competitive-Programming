#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n,m;
        cin>>n>>m;
        vector<int>a(n),b(n);
        for(int i=1;i<n;i++){
            a[0]=1;
            cin>>a[i];
        }
        for(int i=0;i<n;i++){
            cin>>b[i];
        }
        sort(a.begin(),a.end());
        sort(b.begin(),b.end());
        int j=0,k=0,ans=0;
        while(j<n && k<n){
            if(a[j]<b[k]){
                ans++;
                j++;
                k++;
            }
            else{
                k++;
            }
        }
        cout<<n-ans<<endl;
    }
    return 0;
}