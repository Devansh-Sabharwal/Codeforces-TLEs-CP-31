//https://codeforces.com/problemset/problem/1614/B
// Divan and a New Project
#include <bits/stdc++.h>
#ifndef ONLINE_JUDGE
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"
#define pp pair<int,int> 
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        int n;
        cin>>n;
        priority_queue<pp,vector<pp>,less<>> pq;
        vector<int> visit(n) ;
        for(int i=0;i<n;i++){
            int x;cin>>x;
            visit[i] = x;
            pq.push({x,i});
        }
        ll l=0,r=0;bool right = true;
        ll ans = 0;
        while(pq.size()){
            auto p = pq.top();pq.pop();
            int v = p.first;
            int idx   = p.second;
            if(right){
                r++;
                ans+=(r)*visit[idx]*2;
                visit[idx] = r;
                right = false;
            }
            else{
                l--;
                ans+=abs(l)*visit[idx]*2;
                visit[idx] = l;
                right = true;
            }
        }
        cout<<ans<<endl;
        cout<<0<<" ";for(auto x: visit) cout<<x<<" ";
        cout<<endl;
	}
}
