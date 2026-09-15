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
        for(int i=1;i<=n;i++){
            cin>>a[i];
        }
         int count = 0;
        for (int i=1;i<=n;i++) {
            if(a[i]<=i) {
                count++;
            }
        }
        cout<<count<<endl;
    }
    return 0;
}