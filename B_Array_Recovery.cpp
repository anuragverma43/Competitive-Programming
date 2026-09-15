#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    ll t;
    cin >> t;

    while(t--){
        int n;
        cin>>n;
        vector<int>a(n);
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        vector<int>ans(n);
        ans[0]=a[0];
        bool ok=false;
        for (int i=1;i<n;i++){
            if(a[i]>0 && ans[i-1]>=a[i]){
                ok=true;
                break;
            }
            ans[i]=ans[i-1]+a[i];
        }
        if(ok){
            cout<<-1<<endl;
        }
        else{
            for(int i=0;i<n;i++){
                cout<<ans[i];
                if(i!=n-1){
                    cout<<" ";
                }
            }
            cout<<endl;
        }
    }
    return 0;
}