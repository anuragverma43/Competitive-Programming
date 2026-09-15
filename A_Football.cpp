#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n;
    cin>>n;
    string s,s1,s2;
    int c1=1,c2=0;
    cin>>s1;
    c1++;
    for(int i=1;i<n;i++){
        cin>>s;
        if(s==s1){
            c1++;
        }
        else{
            s2=s;
            c2++;
        }
    }
    if(c1>c2){
        cout<<s1<<endl;
    }
    else{
        cout<<s2<<endl;
    }
}