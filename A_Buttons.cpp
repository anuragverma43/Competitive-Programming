#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c;
        cin>>a>>b>>c;
        long long Anna=a+(c+1)/2;
        long long Ketie=b+c/2;
        if(Anna>Ketie){
            cout<<"First"<<endl;
        }
        else{
            cout<<"Second"<<endl;
        }
    }
}