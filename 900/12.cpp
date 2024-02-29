// Mainak and Array
//https://codeforces.com/contest/1726/problem/A
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
        int maxi = -1, mini = 9999;
        int maxidx, mindx ; int arr[n];
        for(int i=0;i<n;i++){
            int x; cin>>x;
            arr[i] = x;
            if(x>maxi){
                maxi = x;
                maxidx = i;
            }
            if(x<mini){
                mini = x;
                mindx = i;
            }
        }
        if(mindx == 0 or maxidx == n-1) cout<<maxi-mini<<endl;
        else{
            int a,b, diff,c=0;
            a = maxi - arr[0];
            b = arr[n-1] - mini;
            for(int i=n-1;i>=1;i--){
                int diff = arr[i-1]-arr[i];
                c = max(c,diff);
            }
            cout<<max({a,b,c})<<endl;
        }
	}
}
