#include<bits/stdc++.h>
using namespace std;
int main(){
    int n,m;
    cin>>n>>m;
    int a[m];
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    sort(a,a+m);
    int answer=INT_MAX;
    for(int i=0;i<=m-n;i++){
        answer=min(answer,(a[i+n-1]-a[i]));
    }
    cout<<answer<<endl;
}