//Erase First or Second Letter
//https://codeforces.com/contest/1917/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        set<char> x;
        int n; cin>>n; 
        string s; cin>>s;
        ll ans = 0;
        for(int i=0;i<n;i++){
            x.insert(s[i]);
            ans+=(ll)x.size();
        }
        cout<<ans<<endl;
	}
}
