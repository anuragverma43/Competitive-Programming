#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int n,m;
        cin>>n;
        string a;
        cin>>a;
        cin>>m;
        string b,c;
        cin>>b;
        cin>>c;
        string l="",r="";
        for(int i=0;i<m;i++){
            if(c[i]=='V'){
                l=l+b[i];
            }
            else{
                r=r+b[i];
            }
        }
        reverse(l.begin(),l.end());
        cout<<l+a+r<<endl;
    }
    return 0;
}