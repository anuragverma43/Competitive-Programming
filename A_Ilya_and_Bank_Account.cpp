#include<bits/stdc++.h>
using namespace std;
int main(){
    long long n;
    cin>>n;
    if(n>=0){
        cout<<n<<endl;
    }
    else{
        long long case1=n;
        long long case2=n/10;
        long long case3=(n/100)*10+(n%10);
        long long Max=max(case2,case3);
        cout<<max(case1,Max)<<endl;
    }
}