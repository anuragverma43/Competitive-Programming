#include<bits/stdc++.h>
using namespace std;
#define ll long long

char upper(char c){
    return 'A'+(c-'a');
}
char lower(char c){
    return 'a'+(c-'A');
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    string s;
    cin>>s;
    bool ok=true;
    for(int i=1;i<s.size();i++){
        if(s[i]<'A' || s[i]>'Z'){
            ok=false;
            break;
        }
    }
    if(ok){
        for(int i=0;i<s.size();i++){
            if(s[i]>='A' && s[i]<='Z'){
                s[i]=lower(s[i]);
            }
            else{
                s[i]=upper(s[i]);
            }
        }
    }
    cout<<s<<endl;
    return 0;
}