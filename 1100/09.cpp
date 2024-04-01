#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <D:\CP\debug_Template.cpp>
#else
#define debug(...)
#define debugArr(...)
#endif
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
        ull n,c; cin>>n>>c;
        vector<ull> arr(n); ull ans = -1;
        for(auto &x : arr) cin>>x;
        ull lo = 0, mid, hi = c;
        while(lo<=hi){
            mid = lo+(hi-lo)/2;
            ull sum = 0;
            for(int i=0;i<n;i++){
                ull k = arr[i]+2*mid;
                sum+=(k*k);
            }
            if(c==sum) {
                ans = mid;
                break;
            }
            else if(c>sum){
                lo = mid+1;
            }
            else hi = mid-1;
        }
        cout<<ans<<endl;
	}
}
