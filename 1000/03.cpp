//https://codeforces.com/contest/1876/problem/A
//Helmets in Night Light
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
        ll n,p;
        cin>>n>>p;
        vector<ll> a(n),b(n);
        vector<pair<ll,ll>> v;
        for(int i=0;i<n;i++)cin>>a[i];
        for(int i=0;i<n;i++){
            cin>>b[i];
            v.push_back(make_pair((ll)b[i],(ll)a[i]));
        }
        sort(v.begin(),v.end());
        ll k = n,i=0,cost = 0;
        cost+=p;k--;
        while(i<n){
            if(k==0 or v[i].first>p) break;
            int left = min(k,v[i].second);
            cost+=(left)*v[i].first;
            k-=left;
            i++;
        }
        if(k>0) cost+=k*p;
        cout<<cost<<endl;
	}
}
