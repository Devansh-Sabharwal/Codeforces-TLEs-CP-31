//https://codeforces.com/problemset/problem/1631/B
//Fun with Even Subarrays
#include <bits/stdc++.h>
using namespace std;
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

int solve(){
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
	int tc;
	cin>>tc;
	while(tc--){
		int n;cin>>n;
        vi arr(n);
        read(arr,n);
        int i=n-1,op=0;
        while(i>=0){
            while(i>=0 and arr[i]==arr[n-1]) i--;
            if(i<0) break;
            int cnt = n-1-i;
            i-=cnt;op++;
        }
        cout<<op<<endl;
	}
}
