#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int a,b,c;
        cin>>a>>b>>c;
        int s=a+b+c;
        if(s%3==0 && a==s/3-1 && b==s/3 && c==s/3+1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
    return 0;
}