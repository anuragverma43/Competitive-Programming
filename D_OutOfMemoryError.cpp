#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long n,m,h;
        cin>>n>>m>>h;
        long long orig[n],cur[n];
        for(int i=0;i<n;i++){
            cin>>orig[i];
            cur[i]=orig[i];
        }
        for(int j=0;j<m;j++){
            long long b,c;
            cin>>b>>c;
            b--;
            cur[b]=orig[b]+c;
            if(cur[b]>h){
                cur[b]=orig[b];
            }
        }
        for(int i=0;i<n;i++){
            cout<<cur[i]<<" ";
        }
        cout<<endl;
    }
}