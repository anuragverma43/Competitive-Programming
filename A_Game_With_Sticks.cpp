#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int move=min(n,m);
    if(move%2==1){
        cout<<"Akshat"<<endl;
    }
    else{
        cout<<"Malvika"<<endl;
    }
}