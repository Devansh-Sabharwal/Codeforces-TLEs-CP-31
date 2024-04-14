//https://codeforces.com/problemset/problem/1827/A
//Counting Orders
#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
#include <D:\CP\debug_Template.cpp>
#else
#define debug(...)
#define debugArr(...)
#endif
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"
#define pp pair<int,int>
#define ff first
#define ss second
#define mod 1000000007
vector<int> read(int n){
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	return arr;
}
int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
		int n;
        cin>>n;
        vector<int> a = read(n);
        vector<int> b = read(n);
        sort(a.rbegin(),a.rend());
        sort(b.rbegin(),b.rend());
        int i = 0,j=0;
        long long ans = 1;
        while(i<n){
            while(j<n and b[i]<a[j]){
                j++;
            }
            ans*=(j-i);
            ans%=mod;
            i++; 
        }
        cout<<ans<<endl;
	}
}

