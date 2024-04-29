//https://codeforces.com/problemset/problem/1610/B
//Kalindrome Array
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

bool solve(vi &arr, int k){
    vector<int> temp;
    for(auto x: arr) if(x!=k) temp.pb(x);
    int i=0,j=temp.size()-1;
    while(i<=j){
        if(temp[i]!=temp[j]) return false;
        i++,j--;
    }
    return true;
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
        bool f = true;
        while(i<=j){
            if(arr[i]!=arr[j]){
                f = (solve(arr,arr[i]) or solve(arr,arr[j]));
                break;
            }
            i++;j--;
        }
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
}
