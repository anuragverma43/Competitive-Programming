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
        int cnt1=0;
        for(int i=0;i<n;i++){
            cin>>a[i];
            if(a[i]==1){
                cnt1++;
            }
        }
        int h=n/2;
        if(n%2==0 && cnt1%2==h%2){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }

    return 0;
}