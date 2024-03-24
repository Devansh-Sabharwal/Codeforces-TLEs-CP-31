//https://codeforces.com/problemset/problem/1411/B
//Fair Numbers
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"

bool solve(ll n){
    ll x = n;
    while(n>0){
        int ld = n%10;
        if(ld!=0 and x%ld!=0) return false;
        n/=10;
    }
    return true;
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        ll n;cin>>n;ll i;
        for( i=n;;i++){
            if(solve(i)) break;
        }
        cout<<i<<endl;
	}
}
