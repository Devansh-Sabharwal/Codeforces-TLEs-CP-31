//NIT Destroys the Universe
//https://codeforces.com/contest/1696/problem/B
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
        cin>>n;int count = 0;
        vector<int> arr(n+1,0);
        for(int i=1;i<=n;i++){
            cin>>arr[i];
            if(arr[i]>0 and arr[i-1]==0) count++;
        }
        cout<<min(count,2)<<endl;
	}
}
