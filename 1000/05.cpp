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
class cmp{
public:
    bool operator()(pair<int,int> &p1, pair<int,int> &p2){
        int a = p1.first; int idx1 = p1.second;
        int b = p2.first; int idx2 = p2.second;
        if(a!=b){
            return a<b;
        }
        else return idx1>idx2;
    }
};
int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        int n,k;
        cin>>n>>k;
        priority_queue<pair<int,int>,vector<pair<int,int>>,cmp> pq;
        vector<int> arr(n),ans;
        for(int i=0;i<n;i++){ cin>>arr[i]; pq.push({arr[i],i});}
        debug(pq);
        debug(pq.top());
        while(pq.size()){
            auto x = pq.top(); pq.pop();
            debug(x.first-k);
            if(x.first-k<=0) ans.push_back(x.second);
            else pq.push({x.first-k,x.second});
            debug(ans);
            debug(pq);
        }
        for(auto x: ans) cout<<x+1<<" ";
        cout<<endl;
	}
}
