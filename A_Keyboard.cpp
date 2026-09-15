#include<bits/stdc++.h>
using namespace std;
int main(){
    char ch;
    cin>>ch;
    string p;
    cin>>p;
    string keyboard="qwertyuiopasdfghjkl;zxcvbnm,./";
    string final="";
    for(char ch:p){
        int pos=keyboard.find(ch);
        if(ch=='R'){
            final+=keyboard[pos-1];
        }
        else{
            final+=keyboard[pos+1];
        }
    }
    cout<<final<<endl;
}
