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
        int xr=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            xr=xr^a[i];
        }
        if(n%2!=0){
            cout<<xr<<endl;
        }
        else{
            if(xr==0){
                cout<<0<<endl;
            }
            else{
                cout<<-1<<endl;
            }
        }
    }
    return 0;
}