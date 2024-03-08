//Mocha and Math
//https://codeforces.com/problemset/problem/1559/A
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
        cin>>n;int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int x = arr[0];
        for(auto a : arr) x&=a;
        cout<<x<<endl;
	}
}
