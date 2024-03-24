//https://codeforces.com/problemset/problem/1312/B
//Bogosort
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
        vector<int> arr(n);
        for(auto &X : arr) cin>>X;
        sort(arr.rbegin(),arr.rend());
        for(auto c: arr) cout<<c<<" ";
        cout<<endl;
	}
}
