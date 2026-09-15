#include<bits/stdc++.h>
using namespace std;
int main(){
    int n;
    cin>>n;
    int a[n];
    int total_sum=0;
    for(int i=0;i<n;i++){
        cin>>a[i];
        total_sum+=a[i];
    }
    sort(a,a+n);
    int count=0;
    int m_sum=0;
    for(int i=n-1;i>=0;i--){
        m_sum=m_sum+a[i];
        count++;
        if(2*m_sum>total_sum){
            break;
        }
    }
    cout<<count<<endl;
}