//Sum of Medians
//https://codeforces.com/contest/1440/problem/B
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
        int n , k;
        cin>>n>>k;int arr[n*k];
        for(int i=0;i<n*k;i++){
            cin>>arr[i];
        }
        ll sum = 0;
        int i=n*k;
        int mid = n/2+n%2;
        int left = n-mid+1;
        while(k--){
            i-=left;
            sum+=arr[i];
        }
        cout<<sum<<endl;
	}
}
