#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    ll t;
    cin >> t;

    while(t--){
        int x;
        cin>>x;
        vector<ll>v;
        int count=0;
        while(x>0){
            x=x/10;
            count++;
        }
        v.push_back(1);
        for(int i=1;i<count;i++){
            v.push_back(0);
        }
        v.push_back(1);
        for(int y:v){
            cout<<y;
        }
        cout<<endl;
    }

    return 0;
}