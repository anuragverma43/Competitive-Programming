#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n,k,m;
        cin>>n>>k>>m;
        if(k>m){
            cout<<"NO"<<endl;
        }
        else{
            cout<<"YES"<<endl;
            int p=0;
            for(int i=1;i<=n;i++){
                int cur=i%k;
                int x=(m+cur-p)%m;
                if(x==0){
                    x=m;
                }
                if(i==n){
                    cout<<x<<endl;
                }
                else{
                    cout<<x<<" ";
                }
                p=cur;
            }
        }
    }
    return 0;
}