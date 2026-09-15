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
        int a[n][m];
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                cin>>a[i][j];
            }
        }
        int sum=0;
        int neg=0;
        int mn=110;
        for(int i=0;i<n;i++){
            for(int j=0;j<m;j++){
                if(a[i][j]<0){
                   neg++;
                }
                if(abs(a[i][j])<mn){
                    mn=abs(a[i][j]);
                }
                sum+=abs(a[i][j]);
            }
        }
        if(neg%2==0){
            cout<<sum<<endl;
        }
        else{
            cout<<sum-(2*mn)<<endl;
        }
    }
    return 0;
}