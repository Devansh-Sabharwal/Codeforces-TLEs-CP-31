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
		vvi arr,brr;
		for(int i=0;i<3;i++){
			vi temp(n);
			read(temp,n);
			brr.pb(temp);
			vi a = solve(temp);
			arr.pb(a);
		}
		int ans = 0, curr = 0;
		for(int i=0;i<3;i++){
			for(int j=0;j<3;j++){
				if(arr[1][j]==arr[0][i]) continue;
				for(int k=0;k<3;k++){
					if(arr[2][k]==arr[0][i] or arr[2][k]==arr[1][j]) continue;
					curr=brr[0][arr[0][i]]+brr[1][arr[1][j]]+brr[2][arr[2][k]];
					if(ans<curr) ans = curr;
				}
			}
		}
		cout<<ans<<endl;
	}
}
