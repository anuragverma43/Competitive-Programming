#include<bits/stdc++.h>
using namespace std;
int main(){
    string s;
    cin>>s;
    for(int i=0;i<s.length();i++){
        char ch=s[i];
        if(ch>=65 && ch<=90){
            ch=ch+32;
        }
        if(ch==97||ch==101||ch==105||ch==111||ch==117||ch==121){
            continue;
        }
        cout<<"."<<ch;
    }
}
