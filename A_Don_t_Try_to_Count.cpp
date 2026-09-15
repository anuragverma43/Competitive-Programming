#include<bits/stdc++.h>
using namespace std;
bool isSubstr(string x, string s){
    for(int i=0;i+s.size()<=x.size();i++){
        if(x.substr(i,s.size())==s){
            return true;
        }
    }
    return false;
}

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,m;
        cin>>n>>m;
        string x,s;
        cin>>x>>s;
        int count=0;
        bool ok=false;
        while(x.size()<=100){
            if(isSubstr(x,s)){
                ok=true;
                break;
            }
            x=x+x;
            count++;
        }
        if(ok){
            cout<<count<<endl;
        }
        else{
            cout<<-1<<endl;
        }
    }
}