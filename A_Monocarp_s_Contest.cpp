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
        int cnt=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==0){
                cnt++;
            }
        }
        if(cnt<2){
            cout<<-1<<endl;
        }
        else{
            if((a[0]==0  && a[n-1]==1)|| (a[n-1]==0 && a[0]==1)){
                cout<<1<<endl;
            }
            else if(a[0]==0 && a[n-1]==0){
                cout<<0<<endl;
            }
            else{
                cout<<2<<endl;
            }
        }
    }

    return 0;
}