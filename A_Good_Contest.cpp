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
        int a1,a2,a3;
        cin>>a1>>a2>>a3;
        cout<<n-min(a1,min(a2,a3))<<endl;
    }

    return 0;
}