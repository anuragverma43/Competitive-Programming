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
        ll n,m;
        cin>>n>>m;
        int maxi=max(n,m);
        cout<<maxi+1<<endl;
    }

    return 0;
}