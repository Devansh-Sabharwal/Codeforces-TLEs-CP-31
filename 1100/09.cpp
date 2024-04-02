//https://codeforces.com/problemset/problem/1850/E
//Cardboard for Pictures
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ll unsigned long long
#define endl "\n"

long long solve(){
}
int main() {
	long long tc;
	cin>>tc;
	while(tc--){
        ll n,c; cin>>n>>c;
        vector<ll> arr(n); ll ans;
        for(auto &x : arr) cin>>x;
        long long l = 1, r = 1e9;
        while(l <= r) {
        long long mid = l + (r - l) / 2;
        long long sum = 0;
        for(long long i = 0; i < n; ++i) {
            sum += (arr[i] + 2*mid)*(arr[i]+2*mid);
            if(sum > c) break;
        }
        if(sum == c) {
            ans = mid;
            break;
        }
        if(sum > c) {
            r = mid - 1;
        } else {
            l = mid + 1;
        }
    }   
        cout<<ans<<endl;
	}
}
