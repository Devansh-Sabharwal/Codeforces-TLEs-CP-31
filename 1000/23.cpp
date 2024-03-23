//https://codeforces.com/problemset/problem/1474/B
//Different Divisors
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"

ll prime(ll n) {//SIEVE 
    if(n==2 or n==3) return n;
    if (n % 2 == 0) ++n;
    while (true) {
        bool isPrime = true;
        for (ll i=3; i*i<=n; i+=2) {
            if (n%i == 0) {
                isPrime = false;
                break;
            }
        }
        if(isPrime) return n;
        n += 2;
    }
}

int main() {
	int tc;
	cin>>tc;
	while(tc--){
        ll d;
        cin>>d;
        ll x = prime(1+d);
        ll y = prime(x+d);
        cout<<x*y<<endl;
	}
}
