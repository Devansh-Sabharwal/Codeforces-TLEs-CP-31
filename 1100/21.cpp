//Coprime
//https://codeforces.com/contest/1742/problem/D
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
		int n;
        cin>>n;
        vi v(n);
        read(v,n);
        int ans = -1;
        vi arr;
        ump<int,int> mp;
        for(int i=0;i<n;i++){
            if(mp.find(v[i])==mp.end()) arr.pb(v[i]);
            mp[v[i]] = i+1;
        }
        for(int i=arr.size()-1;i>=0;i--){
            for(int j=i;j>=0;j--){
                if(gcd(arr[i],arr[j])==1){
                    ans = max(ans,mp[arr[i]]+mp[arr[j]]);
                }
            }
        }
        cout<<ans<<endl;
	}
}
//1 3 5 7 7
//2 4

//1 3 5
//2 4
