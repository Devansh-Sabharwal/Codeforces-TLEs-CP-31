//https://codeforces.com/contest/1791/problem/D
//Distinct Split
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"

int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        int n;
        cin>>n;
        string s;
        cin>>s;
        vector<int> left(n),right(n);
        unordered_set<int> uniq;
        for(int i=0;i<n;i++){
            uniq.insert(s[i]);
            left[i] = uniq.size();
        }
        uniq.clear();
        for(int i=n-1;i>=0;i--){
            uniq.insert(s[i]);
            right[i] = uniq.size();
        }
        int ans = 0;
        for(int i=0;i<n-1;i++){
            ans = max((left[i]+right[i+1]),ans);
        }
        cout<<ans<<endl;
	}
}
