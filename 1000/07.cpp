// Array Merging
//https://codeforces.com/contest/1831/problem/B
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
        int n; int ans=0;
        cin>>n;
        vector<int> a(n),b(n);
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++)cin>>b[i];
        vector<int> freq1(n+n+1,0),freq2(n+n+1,0);
        int s = 0 ,i=1;
        for( i=1;i<n;i++){
            if(a[i]!=a[i-1]){
                int len = i-s;
                freq1[a[i-1]] = max(freq1[a[i-1]],len);
                s = i;
            }
        }
        freq1[a[i-1]] = max(freq1[a[i-1]],i-s);
        s = 0;
        for( i=1;i<n;i++){
            if(b[i]!=b[i-1]){
                int len = i-s;
                freq2[b[i-1]] = max(freq2[b[i-1]],len);
                s = i;
            }
        }
        freq2[b[n-1]] = max(freq2[b[n-1]],n-s);

        for(int i=0;i<freq1.size();i++){
            ans = max(freq1[i]+freq2[i],ans);        
        }
        cout<<ans<<endl;
	}
}
