#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
        int points=0;
        int a[10][10];
        for(int i=1;i<=10;i++){
            for(int j=1;j<=10;j++){
                char x;
                cin >> x;
                if(x=='X'){
                    int a=min(i,11-i);
                    int b=min(j,11-j);
                    points=points+min(a,b);
                }
            }
        }
        cout << points << endl;

    }
    return 0;
}