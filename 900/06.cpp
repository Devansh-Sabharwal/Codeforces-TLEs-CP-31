//https://codeforces.com/problemset/problem/1855/B
//Longest Divisors Interval
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define ull unsigned long long
int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        ull n;
        cin>>n;
        ll i = 1;
        for(i;i<=n;i++){
            if(n%i!=0) break;
        } 
        cout << i-1 << endl;
	}
}
