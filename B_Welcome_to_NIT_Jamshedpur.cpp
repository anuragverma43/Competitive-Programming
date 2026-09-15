#include<bits/stdc++.h>
using namespace std;
#define ll long long

bool isPrime(long long n) {
    if (n < 2) return false;
    if (n % 2 == 0) return n == 2;
    if (n % 3 == 0) return n == 3;
    for (long long i = 5; i * i <= n; i += 6)
        if (n % i == 0 || n % (i + 2) == 0)
            return false;
    return true;
}

vector<bool> is_prime;
void sieve(ll n = 1e6) {
    is_prime.assign(n + 1, true);
    is_prime[0] = is_prime[1] = false;
    for (ll i = 2; i * i <= n; i++)
        if (is_prime[i])
            for (ll j = i * i; j <= n; j += i)
                is_prime[j] = false;
}

int main(){
    ios::sync_with_stdio(false);
    cin.tie(NULL);

    int t;
    cin>>t;
    while(t--){
       int a1,a2,a4,a5;
       cin>>a1>>a2>>a4>>a5;
       int x=a1+a2;
       int y=a4-a2;
       int z=a5-a4;
       if(x==y && y==z && x==z){
        cout<<3<<endl;
       }
       else if((x==y)||(y==z)||(x==z)){
        cout<<2<<endl;
       }
       else{
        cout<<1<<endl;
       }
    }
    return 0;
}