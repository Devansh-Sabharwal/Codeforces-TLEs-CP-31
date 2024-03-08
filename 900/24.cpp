//Exciting Bets
//https://codeforces.com/contest/1543/problem/A
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"
int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        ll a,b;
        cin>>a>>b;
        ll c = abs(a-b);
        if(c==0) {cout<<0<<" "<<0<<endl;continue;}
        ll x = a/c;
        ll x1 = abs(x*c-a),x2 = abs((x+1)*c-a);
        cout<<c<<" "<<min(x1,x2)<<endl;
	}
}
