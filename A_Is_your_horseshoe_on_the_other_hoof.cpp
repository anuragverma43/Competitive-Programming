#include<bits/stdc++.h>
using namespace std;

int main(){
    int s1,s2,s3,s4;
    cin>>s1>>s2>>s3>>s4;
    int count=0;
    if(s1==s2==s3==s4){
        count=count+3;
    }
    else if((s1==s2)||(s2==s3)||(s3==s4)||(s1==s4)&&(s1!=s2!=s3!=s4)){
        count=count+1;
    }
    else if(((s1==s2)&&(s2!=s3))||((s3==s4)&&(s1==s4))||((s1==s2)&&(s3==s4))||((s2==s3)&&(s3==s4))||((s)))
}