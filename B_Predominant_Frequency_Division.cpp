#include<bits/stdc++.h>
using namespace std;
#define ll long long
int main() {
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin>>t;

    while(t--){
        int n;
        cin>>n;
        vector<int>a(n+1);
        for(int i=1;i<=n;i++)
            cin>>a[i];
        vector<int>P(n+1),Q(n+1);
        for(int i=1;i<=n;i++){
            if(a[i]==1){
                P[i]=P[i-1]+1;
            }
            else{
                P[i]=P[i-1]-1;
            }
            if(a[i]==3){
                Q[i]=Q[i-1]-1;
            }
            else{
                Q[i]=Q[i-1]+1;
            }
        }
        vector<int>sufMax((n+2),-(int)1e9);
        for(int i=n-1;i>=1;i--){
            sufMax[i]=max(sufMax[i+1],Q[i]);
        }
        bool ok=false;
        for(int l=1;l<=n-2;l++){
            if(P[l]>=0 && sufMax[l+1]>=Q[l]){
                ok=true;
                break;
            }
        }
        if(ok){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}