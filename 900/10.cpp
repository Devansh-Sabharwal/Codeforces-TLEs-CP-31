//Odd Queries
//https://codeforces.com/contest/1807/problem/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        int n , q;
        cin>>n>>q;
        vector<int> arr(n), pre;
        pre.push_back(0);
        for(int i=0;i<n;i++){
            cin>>arr[i];
            pre.push_back((pre[i]+arr[i]));
        }
        while(q--){
            int l,r,k;
            cin>>l>>r>>k;
            ll left = (ll)pre[l-1];
            ll right = (ll)pre.back()-pre[r];
            ll len = r-l+1; 
            ll z = (ll)k*len;
            ll sum = left+right+z;
            cout<<((sum%2)?"YES":"NO");
            cout<<"\n";
        }
	}
}
