#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        if(n==1){
            for(int i=0;i<n;i++){
                cout<<1<<" ";
            }
            cout<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<2<<" ";
            }
            cout<<endl;
        }
    }
    return 0;
}
