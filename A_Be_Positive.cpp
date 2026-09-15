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
        int c0=0,c1=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                c0++;
            }
            else if(a[i]==-1){
                c1++;
            }
        }
        if(c1%2==0){
            cout<<c0<<endl;
        }
        else{
            cout<<2+c0<<endl;
        }
    }

    return 0;
}