#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        long long x,y;
        cin>>x>>y;
        long long a,b;
        cin>>a>>b;
        
        long long Tsteps=max(x,y);
        long long  move2=min(x,y);
        long long move1=x+y;
        long long Tcost1=(x+y)*a;
        long long cost2=move2*b;
        long long remainmove=Tsteps-move2;
        long long Tcost2=(remainmove*a)+cost2;
        cout<<min(Tcost1,Tcost2)<<endl;
    }
}