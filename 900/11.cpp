//Not Dividing
//https://codeforces.com/problemset/problem/1794/B
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
		cin>>n; int arr[n];
		for(int i=0;i<n;i++){
			cin>>arr[i];
		}
		if(arr[0]==1) arr[0]++;
		for(int i=1;i<n;i++){
			if(arr[i]==1){
				arr[i]++;
				while(arr[i]%arr[i-1]==0) arr[i]++;
			}
			if(arr[i]%arr[i-1]==0){
				arr[i]++;
			}
		}
		for(int i=0;i<n;i++) cout<<arr[i]<<" ";
		cout<<endl;
	}
}
