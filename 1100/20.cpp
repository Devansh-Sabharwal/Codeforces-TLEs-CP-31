//GCD Partition
//https://codeforces.com/problemset/problem/1780/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define read(arr,n) for(ll i=0;i<n;i++) cin>>arr[i]
#define presum(x,y) for(ll i=1;i<x.size();i++) y[i]=y[i-1]+x[i]
#define pb(x) push_back(x)
#define vi vector<int>
#define vl vector<ll>
#define vvi vector<vector<int>>
#define vvl vector<vector<ll>>
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"
#define pp pair<int,int>
#define ff first
#define ss second
#define mod 1000000007
#define srt(v) sort(v.begin(),v.end())
#define rsrt(v) sort(v.rbegin(),v.rend())
#define rev(v) reverse(v.begin(),v.end())
#define ump unordered_map
int solve(){
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
	int tc;
	cin>>tc;
	while(tc--){
		int n;
        cin>>n;
        vi v(n);
        ll sum = 0;
        for(int i=0;i<n;i++){
            cin>>v[i];
            sum+=v[i];
        }
        ll run = 0, ans = 1;
        for(int i=0;i<n-1;i++){
            run+=v[i];
            sum-=v[i];
            ans = max(gcd(run,sum),ans);  
        }
        cout<<ans<<endl;
        
	}
}

