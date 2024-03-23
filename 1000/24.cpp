//https://codeforces.com/problemset/problem/1447/B
//Number box
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

int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        int m,n; cin>>m>>n;
        vector<int> arr(m*n);
        int count = 0,sum = 0,mini = INT_MAX;
        for(int i=0;i<m*n;i++){
            cin>>arr[i];
            if(arr[i]<=0) count++;
            sum+=abs(arr[i]);
            arr[i] = abs(arr[i]);
            mini = min(mini,arr[i]);
        }
        if(count==0 or count%2==0){
            cout<<sum<<endl;
        }
        else{
            sum-=2*mini;
            cout<<sum<<endl;
        }
	}
}
