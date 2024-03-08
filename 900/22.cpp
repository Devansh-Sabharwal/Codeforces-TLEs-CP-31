//Luntik and Subsequences
//https://codeforces.com/problemset/problem/1582/B
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
        ll n;cin>>n;
        ll zeroes = 0 ,ones =0;
        for(int i=0;i<n;i++){
            ll x;cin>>x;
            if(x==0) zeroes++;
            else if(x==1) ones++;
        }
        ll each = pow(2,zeroes);
        ll total = ones*(each?each:1);
        cout<<total<<endl;
	}
}
