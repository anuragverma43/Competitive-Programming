#include<bits/stdc++.h>
using namespace std;
int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int n,m;
    cin>>n>>m;
    int minMoves=(n+1)/2;
    while(minMoves <= n){
        if(minMoves % m == 0){
            cout<<minMoves<<endl;
            return 0;
        }
        minMoves++;
    }
    cout<<-1<<endl;
    return 0;
}