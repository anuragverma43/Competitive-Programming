#include<bits/stdc++.h>
using namespace std;

int main(){
    int n;
    cin>>n;
    string s;
    for(int i=1;i<=n;i++){
        if(i%2!=0){
            s=s+"I hate";
        }
        else{
            s=s+"I love";
        }
        if(i<n){
            s=s+" that ";
        }
    }
    s=s+" it ";
    cout<<s<<endl;
}