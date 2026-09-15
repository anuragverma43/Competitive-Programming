#include<bits/stdc++.h>
using namespace std;
#define ll long long

int digitsum(int x){
    int result=0;
    while(x>0){
        result=result+(x%10);
        x=x/10;
    }
    return result;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n;
    cin>>n;
    int d;
    int cnt=0;
    while(d>9){
        d=digitsum(n);
        cnt++;
    }
    cout<<cnt<<endl;
    return 0;
}