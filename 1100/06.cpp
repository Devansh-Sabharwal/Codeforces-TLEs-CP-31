//Deja Vu
//https://codeforces.com/problemset/problem/1891/B
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
    vector<ll> two(31,1);
    for(int i=1;i<=30;i++){
        two[i]=two[i-1]*2;
    }
	while(tc--){
        ll n,m; cin>>n>>m;
        vector<ll> a(n),b(m);
        for(auto &x: a) cin>>x;
        for(auto &x: b) cin>>x;
        ll max = INT_MAX;
        vector<ll> p;
        for(int i=0;i<m;i++){
            if(b[i]<max){
                p.push_back(b[i]);
                max = b[i];
            }
        }
        for(ll x: p){
            ll y = two[x];
            for(int i=0;i<a.size();i++){
                if(a[i]%y==0) a[i]+=two[x-1];
            }
        }
        for(auto x: a) cout<<x<<" ";
        cout<<endl;
	}
}
