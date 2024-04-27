//https://codeforces.com/problemset/problem/1656/B
//Subtract Operation
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
		int n,k;
        cin>>n>>k;
        vi v(n);
        read(v,n);
        srt(v);
        bool f = false;
        int left = 0, right = 1;
        while (right < n) {
            int diff=v[right]- v[left];
            if(diff==k) {
                f = true;
                break;
            }
            else if (diff < k) right++;
            else{
                left++;
                if (left==right) right++;
            }
        }
        
        if(f) cout<<"YES"<<endl;
        else cout<<"NO"<<endl;
	}
}
