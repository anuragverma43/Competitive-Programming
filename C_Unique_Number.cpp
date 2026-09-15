#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x;
        cin>>x;
        if(x>45){
            cout<<-1<<endl;
            continue;
        }
        int digit[10];
        int count=0;
        for(int d=9;d>=1;d--){
            if(x>=d){
                digit[count++]=d;
                x=x-d;
            }
        }
        sort(digit,digit+count);
        for(int i=0;i<count;i++){
            cout<<digit[i];
        }
        cout<<endl;

    }
}