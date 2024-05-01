//https://codeforces.com/problemset/problem/1914/D
//Three Activities
#include <bits/stdc++.h>
using namespace std;
#define yes "YES"
#define no "NO"
#define ll long long 
#define read(arr,n) for(ll i=0;i<n;i++) cin>>arr[i]
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
#define uset unordered_set
#define setbits(x) __builtin_popcount(x)

vector<int> solve(vector<int>& arr) {
    int n = arr.size();
    int a=-1,b=-1,c=-1;
    for (int i = 0; i < n; ++i) {
        if (a==-1 or arr[i]>arr[a]) c=b,b=a,a=i;
        else if (b==-1 or arr[i]>arr[b]) c=b,b=i;
        else if (c==-1 or arr[i]>arr[c]) c = i;
    }
    return {a,b,c};
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
	int tc;
	cin>>tc;
	while(tc--){
		int n;cin>>n;
		vvi arr;
		for(int i=0;i<3;i++){
			vi temp(n);
			read(temp,n);
			arr.pb(temp);
		}
		int ans = 0, curr = 0;
		for(auto x : solve(arr[0])){
			for(auto y : solve(arr[1])){
				for(auto z: solve(arr[2])){
					if(x!=y and y!=z and z!=x){
						curr=arr[0][x]+arr[1][y]+arr[2][z];
						ans = max(curr,ans);
					}
				}
			}
		}
		cout<<ans<<endl;
	}
}
