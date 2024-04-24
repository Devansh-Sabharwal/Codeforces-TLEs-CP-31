//https://codeforces.com/contest/1673/problem/B
//A Perfectly Balanced String?
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
		string s;
        cin>>s; bool flag = true;
        ump<char,int> mp;
        for(auto c: s) mp[c]++;
        int uniq = mp.size();
        for(int i=0;i<26;i++){
            if(mp['a'+i]<2) continue;
            int j=0;
            char key = 'a'+i;
            int n = s.size();
            while(j<n){
                int count = 0;
                while(j<n and s[j]!=key) j++;
                j++;
                while(j<n and s[j]!=key) j++,count++;
                if(j<n and uniq-count>1){
                    flag = false;
                    break;
                }
                
            }
            if(!flag) break;
        }
        cout<<((flag)?"YES":"NO")<<endl;
	}
}
//bacdb
