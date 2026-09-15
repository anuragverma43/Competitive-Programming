#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        string s;
        cin>>s;
        string empty="";
        int moves=0;
        for(int i=0;i<s.length();i++){
            if(!empty.empty() && empty.back() != s[i]){
                empty.pop_back();
                moves++;
            }
            else{
                empty=empty+s[i];
            }
        }
        if(moves%2 == 0){
            cout<<"NET"<<endl;
        }
        else{
            cout<<"DA"<<endl;
        }
    }
}