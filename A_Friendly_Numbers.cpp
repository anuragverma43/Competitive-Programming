#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
       long long x;
       cin>>x;
       int number=0;
       for(long long y=x;y<=x+90;y++){
          long long p=y;
          int sum=0;
          while(p>0){
              sum=sum+p%10;
              p=p/10;
          }
          if(y-sum==x){
            number++;
          }
       }
       cout<<number<<endl;
    }
}