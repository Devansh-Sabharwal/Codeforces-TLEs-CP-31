//Eating Candies
//https://codeforces.com/contest/1669/problem/F
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
        int i=0,j=n-1;
        int a = 0, b = 0, ans = 0;
        while(i<=j){
            if(a==b){
                ans = n-1-j+i;
                a+=arr[i++];
            }
            else if(a<b) a+=arr[i++];
            else b+=arr[j--];
        }
        if(a==b) ans = n-1-j+i;
        cout<<ans<<endl;
	}
}
