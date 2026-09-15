#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    string sub="WUB";
    size_t pos;
    while((pos=s.find(sub))!=string::npos){
        s.replace(pos,sub.length()," ");
    }
    cout<<s<<endl;
    return 0;
}