//https://codeforces.com/problemset/problem/1704/B
//Luke is a Foodie
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
        int n,x;
        cin>>n>>x;
        vector<int> arr(n);
        for(int i=0;i<n;i++) cin>>arr[i];
        int s = INT_MIN,e = INT_MAX,ans = 0;
        for(int i=0;i<n;i++){
            int start = arr[i]-x;
            int end   = arr[i]+x;
            s = max(start,s);
            e = min(end ,e);
            if(s>e){
                ans++;
                s = start;
                e = end;
            }
        }
        cout<<ans<<endl;
	}
}
