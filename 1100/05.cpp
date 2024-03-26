//https://codeforces.com/problemset/problem/1899/B
//250 Thousand Tons of TNT
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"

vector<ll> div( ll &n){
    vector<ll> ans;
    for(ll i=1;i<=sqrt(n);i++){
        if(n%i==0){
            ans.push_back(i);
            ans.push_back(n/i);
        }
    }
    return ans;
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        ll n; cin>>n;
        vector<ll> v = div(n);
        vector<ll> arr(n);
        for(int i=0;i<n;i++)cin>>arr[i];

        ll ans = 0;
        for(auto c : v){
            ll sum = 0;
            ll mini = LLONG_MAX,maxi = LLONG_MIN;
            if(c==n) continue;
            for(int i=0;i<n;i++){
                if((i+1)%c==0){
                    sum+=arr[i];
                    maxi = max(sum,maxi);
                    mini = min(sum,mini);
                    sum = 0;
                }
                else sum+=arr[i];
            }
            debug(maxi);
            ans = max(ans,maxi-mini);
        }
        cout<<ans<<endl;
	}
}
