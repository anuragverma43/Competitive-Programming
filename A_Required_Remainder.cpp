#include <bits/stdc++.h>
using namespace std;

int main() {
    int t;
    cin >> t;
    while (t--) {
        int x,y,n;
        cin>>x>>y>>n;
        int remain=n-(n%x);
        int kth=remain+y;
        if(kth>n){
            cout<<kth-x<<endl;
        }
        else{
            cout<<kth<<endl;
        }
    }
}
