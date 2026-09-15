#include<bits/stdc++.h>
using namespace std;
#define ll long long

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);
    int n,m;
    cin>>n>>m;
    vector<int>a(m);
    for(int i=0;i<m;i++){
        cin>>a[i];
    }
    int count=0;
    int d1=abs(a[0]-1);
    int d2=abs(a[m-1]-a[0]);
    for(int i=0;i<m-1;i++){
        count=count+abs(a[i]-a[i+1]);
    }
    cout<<count+d1+d2<<endl;
    return 0;
}