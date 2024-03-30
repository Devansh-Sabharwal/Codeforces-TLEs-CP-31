//https://codeforces.com/problemset/problem/1873/E
//Building an Aquarium
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        ll n, x;
        cin>>n>>x;
        vector<ll> arr(n);
        for(auto &a: arr) cin>>a;
        ll lo = 0, hi = 1e10,mid;
        ll ans = 0;
        while(lo<=hi){
            mid = lo+(hi-lo)/2;
            ll w = 0;
            for(int i=0;i<n;i++){
                ll h = max(1ll*0,(mid-arr[i]));
                w+=h;
            }
            if(w<=x){
                ans = mid;
                lo = mid+1;
            }
            else hi = mid-1;
        }
        cout<<ans<<endl;
	}
}
