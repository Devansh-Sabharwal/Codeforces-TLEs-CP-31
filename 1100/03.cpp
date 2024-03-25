//Collecting Game
//https://codeforces.com/problemset/problem/1904/B
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
        vector<ll> ans(n),pre(n);
        vector<pair<ll,ll>>v(n);
        for(int i=0;i<n;i++){
            ll c; cin>>c;
             v[i] = {c,i};
        }
        sort(v.begin(),v.end());
        pre[0] = v[0].first;
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1]+v[i].first;
        }
        ans[v[n-1].second] = n-1;
        for(int i=n-2;i>=0;i--){
            ll score = pre[i];
            if(score>=v[i+1].first){
                ans[v[i].second] = ans[v[i+1].second];
            }
            else{
                ans[v[i].second] = i;
            }
        }
        for(auto x: ans) cout<<x<<" ";
        cout<<endl;
	}
}
