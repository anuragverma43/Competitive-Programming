#include<bits/stdc++.h>
using namespace std;

int main(){
    int Y,W;
    cin>>Y>>W;

    int M=max(Y,W);
    if(M>6){
        cout<<"0/1"<<endl;
    }
    int num=6-M+1;
    int den=6;

    int g=__gcd(num,den);
    cout<<num/g<<"/"<<den/g<<endl;
}