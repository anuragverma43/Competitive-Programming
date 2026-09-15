#include<bits/stdc++.h>
using namespace std;

int main(){
    int t;
    cin>>t;
    while(t--){
        int n,x,y;
        cin >> n >> x >> y;
        string s;
        cin >> s;
        int count=0;
        for(int i=0;i<n;i++){
            if(s[i]=='4'){
                count++;
                break;
            }
        }

        if(count==0){
            if((x<=n && x>=-n) && (y<=n && y>=-n)){cout << "YES" << endl;}
            else{cout << "NO" << endl;}
        }
        else{
            if(n==1){
                if((x<=n && x<=-n) && (y<=n && y>=-n)){cout << "YES" << endl;}
                else{cout << "NO" << endl;}
            }
            else if((x<=n-1 && x>=-(n-1)) && (y<=n-1 && y>=-(n-1))){cout << "YES" << endl;}
            else if(x==n && (y<=n-2 && y>=-(n-2))){cout << "YES" << endl;}
            else if(y==n && (x<=n-2 && x>=-(n-2))){cout << "YES" << endl;}
            else if(x==-n && (y<=n-2 && y>=-(n-2))){cout << "YES" << endl;}
            else if(y==-n && (x<=n-2 && x>=-(n-2))){cout << "YES" << endl;}
            else{cout << "NO" << endl;}
        }
    }
}