#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios_base::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        sort(a.begin(),a.end());
        bool ok=false;
        for(int i=1;i<n;i++){
            if(a[i]==a[i-1]){
                ok=true;
                break;
            }
        }
        if(ok){
            cout<<-1<<endl;
            continue;
        }
        sort(a.begin(),a.end(),greater<int>());
        for(int i=0;i<n;i++){
            cout<<a[i]<<" ";
        }
        cout<<endl;
    }
    return 0;
}