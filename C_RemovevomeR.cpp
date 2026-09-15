#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin >> t;

    while(t--){
        int n;
        string s;
        cin>>n>>s;
        int count=1;
        for(int i=1;i<n;i++){
            if(s[i]!=s[i-1]){
                count++;
            }
        }
        if(count==2){
            cout<<2<<endl;
        }
        else{
            cout<<1<<endl;
        }
    }

    return 0;
}