#include<bits/stdc++.h>
using namespace std;
int main(){
    int a[4];
    cin>> a[0] >> a[1]>>a[2]>>a[3];
    int l=0;
    for(int i=0;i<4;i++){
        if(a[i]>l){
            l=a[i];
        }
    }
    for(int i=0;i<4;i++){
        if(a[i]!=l){
            cout << l-a[i] << " ";
        }
    }
    


}