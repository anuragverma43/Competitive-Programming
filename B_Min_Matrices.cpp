#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n,k;
        cin>>n>>k;
        if(k<n || k>2*n-1){
            cout<<-1<<endl;
        }
        else{
            vector<vector<int>>a(n,vector<int>(n));
            int x=1; 
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    a[i][j]=x;
                    x++;
                }
            }
            for(int i=0;i<=2*n-k-1;i++){
                swap(a[i][i],a[0][i]);
            }
            for(int i=0;i<n;i++){
                for(int j=0;j<n;j++){
                    cout<<a[i][j]<<" ";
                }
                cout<<endl;
            }
        }
    }
    return 0;
}