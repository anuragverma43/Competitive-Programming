#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>> n;
        int count=0;
        int temp=n;
        int digits=0;
        while(temp>0){
            digits++;
            temp=temp/10;
        }
        for(int i=1;i<digits; i++){
            count=count+9;
        }
        int firstdigit = n/pow(10,digits -1);
        count=count+firstdigit;
        cout << count <<endl;
    }
}