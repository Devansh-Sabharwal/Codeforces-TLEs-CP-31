//https://codeforces.com/problemset/problem/1914/C
//Quests
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
        ll n ; cin>>n; ll k ; cin>>k;
        vector<ll> q(n),s(n);
        for(ll i=0;i<n;i++) {
            cin>>q[i];
            if(i>0) q[i]+=q[i-1];
        }
        ll maxi = LLONG_MIN;
        for(ll i=0;i<n;i++){
            cin>>s[i];
            maxi = max(maxi,s[i]);
            s[i] = maxi;
        }
        ll idx = min(k-1,n-1); ll ans = 0;
        while(idx>=0){
            ll score = q[idx];
            ll slot = k-1-idx;
            ans = max(ans,score+slot*s[idx]);
            idx--;
        }
        cout<<ans<<endl;
	}
}
