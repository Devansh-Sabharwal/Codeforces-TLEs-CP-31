//Permutation Swap
//https://codeforces.com/contest/1828/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
int solve(){
}

int main() {
	int tc;
	cin>>tc;
	while(tc--){
        int n;
        cin>>n; int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int x;int ans = 0;
        for(int i=0;i<n;i++){
            if(arr[i]==i+1) continue;
            x = abs(arr[i]-(i+1));
            ans = gcd(x,ans);
        }
        cout<<ans<<endl;
	}
}
