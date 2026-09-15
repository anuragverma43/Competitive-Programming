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
        vector<int>a;
        int s=1;
        int g=3*n;
        for(int i=0;i<n;i++){
            int h=g;
            int h_2=g-1;
            a.push_back(s);
            a.push_back(h_2);
            a.push_back(h);
            s++;
            g=g-2;
        }
        for(int x:a){
            cout<<x<<" ";
        }
        cout<<endl;
    }
    return 0;
}