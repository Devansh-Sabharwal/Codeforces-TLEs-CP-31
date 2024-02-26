//Balanced Round
//https://codeforces.com/problemset/problem/1850/D
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        int n,k;
        cin>>n>>k;
        int arr[n];
        for(int i=0;i<n;i++){
            cin>>arr[i];
        }
        sort(arr,arr+n);
        int streak = 1; int maxstreak = 1;
        for(int i=0;i<n-1;i++){
            if(arr[i+1]-arr[i]<=k) streak++;
            else{
                maxstreak = max(maxstreak,streak);
                streak = 1;
            } 
        }
        maxstreak = max(maxstreak,streak);
        cout<<n-maxstreak<<endl;
	}
}
