//https://codeforces.com/problemset/problem/1475/A
//Odd Divisor
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"
#define yes "YES"
#define no "NO"
int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        ll n ; cin>>n;
        if((n&(n-1))==0) cout<<no<<endl;
        else cout<<yes<<endl;
	}
}
