#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int a,b;
        cin>>a>>b;
        if(a<=b){
            cout<<-1<<endl;
        }
        else{
            cout<<min(a-b,b)<<endl;
        }
    }

    return 0;
}