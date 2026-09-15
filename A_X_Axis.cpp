#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int x1,x2,x3;
        cin>>x1>>x2>>x3;
        if((x1>=x2&&x1<=x3)||(x1>=x3&&x1<=x2)){
            cout<<abs(x1-x2)+abs(x1-x3)<<endl;
        }
        else if((x2>=x1&&x2<=x3)||(x2<=x1&&x2>=x3)){
            cout<<abs(x1-x2)+abs(x2-x3)<<endl;
        }
        else if((x3>=x1&&x3<=x2)||(x3<=x1&&x3>=x2)){
            cout<<abs(x3-x2)+abs(x1-x3)<<endl;
        }
        /*OR ANOTHER CODE IS 
        int x[3];
        cin>>x[0]>>x[1]>>x[2];
        sort(x,x+3);
        int m=x[1];
        int ans=abs(x[0]-m)+abs(x[1]-m)+abs(x[2]-m);
        cout<<ans<<endl;
        */
    }
}