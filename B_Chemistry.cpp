#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n,k;
        cin>>n>>k;
        string s;
        cin>>s;
        int a[26]={0};
        for(char c:s){
            a[c-'a']++;
        }
        int count=0;
        for(int i=0;i<26;i++){
            if(a[i]%2==1){
               count++;
            }
        }
        if(k>=count-1){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
    }
}