#include<bits/stdc++.h>
using namespace std;
int main(){ 
    int t; 
    cin>>t; 
    while(t--){ 
        long long p,q; 
        cin>>p>>q; 
        long long m_x=min(p/2,q/3);
        bool b=false;
        for(long long x=max(1ll,m_x-2);x<=m_x;x++){
             if(x>=1 &&(p+q-5*m_x)%2==0){
                 b=true; 
                 break; 
                } 
        } 
        if(b){ 
            cout<<"Bob"<<endl; 
        }
        else{ 
            cout<<"Alice"<<endl;
        } 
    } 
}