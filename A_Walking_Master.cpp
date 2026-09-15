#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        long long a,b,c,d;
        cin>>a>>b>>c>>d;
        int n1=d-b; // moves which changes y
        int n2=n1-(c-a); // moves which changes x
        int total= n1+n2;
        if(d<b || n2<0){
            cout<<-1<<endl;
        }
        else{
            cout<<total<<endl;
        }
    }

}