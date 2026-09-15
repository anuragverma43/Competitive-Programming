#include<bits/stdc++.h>
using namespace std;

int main(){
    long long n,m;
    cin>>n>>m;
    int moves=0;

    if(m<n){
        cout<<-1<<endl;
        return 0;
    }
       
    if(m%n!=0){
        cout<<-1<<endl;
        return 0;
    }
    long long r=m/n;
    while(r%2==0){
        r=r/2;
        moves++;
    }
    while(r%3==0){
        r=r/3;
        moves++;
    }
    if(r==1){
        cout<<moves<<endl;
    }
    else{
        cout<<-1<<endl;
    }
    return 0;
    
 }