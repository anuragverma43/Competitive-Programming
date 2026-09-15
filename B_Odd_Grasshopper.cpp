#include <bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(nullptr);

    int t;
    cin>>t;

    while(t--){
        ll x,n;
        cin>>x>>n;
        if(x%2==0){
            if(n%4==1){
                x=x-n;
            }
            else if(n%4==2){
                x=x+1;
            }
            else if(n%4==3){
                x=x+n+1;
            }
        }
        else{
            if(n%4==1){
                x=x+n;
            }
            else if(n%4==2){
                x=x-1;
            }
            else if(n%4==3){
                x=x-(n+1);
            }
        }
        cout<<x<<endl;
    }
    return 0;
}