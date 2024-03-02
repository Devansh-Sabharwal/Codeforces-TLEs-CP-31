//Make It Increasing
//https://codeforces.com/problemset/problem/1675/B
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
        int n;cin>>n;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        int count = 0;
        for(int i=n-1;i>0;i--){
            if(arr[i]<=arr[i-1]){
                if(arr[i]==0){
                    count = -1;
                    break;
                }
                while(arr[i-1]>=arr[i]){
                    arr[i-1]/=2; count++;
                }
            }
        }
        cout<<count<<endl;
	}
}
