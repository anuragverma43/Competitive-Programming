#include<bits/stdc++.h>
using namespace std;

int main(){
     int n,m,x;
     cin>>n>>m;
     int count=0;
     for(int i=m; i>0; i--){
        for(int j=m;j>0;j--){
        if(m%i==0){
            count++;
            if(count==2){
                x=i;
            }
            break;
        }
        if(i=m){
            cout<<"YES"<<endl;
        }
        else{
            cout<<"NO"<<endl;
        }
        }
     }
}