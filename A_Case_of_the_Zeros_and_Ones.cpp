#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    string s;
    cin>>s;
    int count_1=0;
    int count_0=0;
    for(char ch:s){
        if(ch=='0'){
            count_0++;
        }
        else{
            count_1++;
        }
    }
    cout<<abs(count_1-count_0)<<endl;
}
