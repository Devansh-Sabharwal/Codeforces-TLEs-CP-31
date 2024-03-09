//https://codeforces.com/contest/1380/problem/A
//Three Indices
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
        int n;cin>>n;int arr[n];
        for(int i=0;i<n;i++) cin>>arr[i];
        int idx = -1;
        for(int i=1;i+1<n;i++){
            if(arr[i]>arr[i+1] and arr[i]>arr[i-1]){
                idx = i;
                break;
            }
        }
        if(idx==-1) cout<<"NO"<<endl;
        else{
            cout<<"YES"<<endl;
            cout<<idx<<" "<<idx+1<<" "<<idx+2<<endl;
        }
	}
}
