//https://codeforces.com/problemset/problem/1691/B
//Shoe Shuffling
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
        int n; cin>>n;
        vector<int> arr(n),res(n,-1);
        for(auto &x: arr) cin>>x;
        int ans = 1;
        int i=0,j=1;
        while(i<n){
            while(j<n and arr[j]==arr[j-1]){
                res[j] = j;//j-1+1
                res[i] = j+1;
                j++;
            }
            if(res[i]==-1){ ans = -1;break;}
            i=j++;
        }
        if(ans==-1) cout<<ans;
        else for(auto x:res) cout<<x<<" ";
        cout<<endl;
	}
}
