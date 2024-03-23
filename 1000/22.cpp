//https://codeforces.com/problemset/problem/1485/A
//Add and Divide
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"

int solve(int n , int i){
    int count = 0;
    if(i==1) return n+1;
    while(n>0){
        n/=i;
        count++;
    }
    return count;
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        int a,b;cin>>a>>b;
        if(b>a){cout<<1<<endl;continue;};
        int ans = INT_MAX,prev = INT_MAX;
        for(int i=b;i<=a;i++){
            int curr = solve(a,i)+i-b;
            ans = min(curr,ans);
            if(curr>prev) break;
            prev = curr;
        }
        cout<<ans<<endl;
	}
}
