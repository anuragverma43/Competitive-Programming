#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int count=0;
    while(n>0){
       int digit=n%10;
       if(digit==4||digit==7){
        count++;
       }
    }
}