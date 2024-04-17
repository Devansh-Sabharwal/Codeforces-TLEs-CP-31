//https://codeforces.com/problemset/problem/1807/G2
//Subsequence Addition (Hard Version)
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
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

vector<ll> read(int n){
	vector<ll> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	return arr;
}
int solve(){
}
int main() {
    ios::sync_with_stdio(0); cin.tie(0);
	int tc;
	cin>>tc;
	while(tc--){
		ll n;
        cin>>n;
        vl v = read(n);
        srt(v);
        vl pre;
        pre.push_back(v[0]);
        for(int i=1;i<v.size();i++){
            pre.push_back(pre.back()+v[i]);
        }
        if(pre[0]!=1){
            cout<<"NO"<<endl;
            continue;
        }
        bool flag = true;
        for(int i=1;i<n;i++){
            if(v[i]>pre[i-1]) {
                flag = false;
                break;
            }
        }
        if(flag) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
}
/*
1 1 2 3 5 12
1 2 4 7 12 24

1 1 2 5 7
1 2 4 9 16

1 1 1 2 4
1 2 3 5 9
*/
