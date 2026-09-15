#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int awake=-1,count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='1'){
                awake=i+k;
            }
            else{
                if(i>awake){
                    count++;
                }
            }
        }
        cout<<count<<endl;
    }
    return 0;
}