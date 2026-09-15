#include<bits/stdc++.h>
using namespace std;
int main(){
    int t;
    cin>>t;
    while(t--){
        int n;
        cin>>n;
        int a[n];
        for(int i=0;i<n;i++){
            cin>>a[i];
        }
        int count1=0,count_1=0;
        for(int i=0;i<n;i++){
            if(a[i]==1){
                count1++;
            }
            else{
                count_1++;
            }
        }
        int operation=0;
        if(count1<count_1){
            int k =(count_1 - count1+1)/2;
            operation+=k;
            count1=count1+k;
            count_1=count_1+k;
        }
        if(count_1%2==1){
            operation++;
        }
        cout<<operation<<endl;
    }
}