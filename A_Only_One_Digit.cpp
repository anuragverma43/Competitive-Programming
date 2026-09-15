#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
       
        int answer=9;
        while(x>0){
            answer=min(answer,x%10);
            x=x/10;
        }
        cout<<answer<<endl;
    }
}