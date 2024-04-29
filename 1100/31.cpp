//https://codeforces.com/problemset/problem/1511/C
//Yet Another Card Deck
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
	// int tc;
	// cin>>tc;
	//while(tc--){
		int n,k;cin>>n>>k;
        ump<int,int> idx;
        vi arr(n),q(k);
        read(arr,n);
        read(q,k);
        for(int i=0;i<n;i++){
            int x = arr[i];
            if(idx.find(x)==idx.end()) idx[x] = i+1; 
        }
        for(int i=0;i<k;i++){
            int c = q[i];
            cout<<idx[c]<<" ";
            for(auto &x: idx) {
                if(x.second<idx[c]) x.second+=1;
            }
            idx[c] = 1;
        }
        cout<<endl;
	}
//}
