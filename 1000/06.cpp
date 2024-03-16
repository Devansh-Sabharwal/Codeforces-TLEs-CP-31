//https://codeforces.com/problemset/problem/1840/C
//Ski Resort
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
        int n,k,t;
        cin>>n>>k>>t;
        vector<ll> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        ll ans = 0;ll days = 0;
        for(int i=0;i<n;i++){
            if(arr[i]<=t) days++;
            else{
                debug(i);debug(days);
                if(days>=k){
                    ll possible = (days*(days+1))/2;
//(k-1)/2(2n-k+2)
                    ll x = ((k-1)*(2*days-k+2))/2;
                    debug(x);
                    ans+=possible-x;
                }
                days= 0;
            }
        }
        debug(days);
        if(days>=k){
            ll possible = (days*(days+1))/2;
            ll x = ((k-1)*(2*days-k+2))/2;
            ans+=possible-x;
        }
        cout<<ans<<endl;
	}
}
