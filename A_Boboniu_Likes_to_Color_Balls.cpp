#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int T;
    cin>>T;
    while(T--){
        ll r,g,b,w;
        cin>>r>>g>>b>>w;
        if(r==g&&g==b&&b==w){
            cout<<"Yes"<<endl;
        }
    }
    return 0;
}