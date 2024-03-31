//2D Traveling
//https://codeforces.com/contest/1869/problem/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"

ll solve(vector<vector<ll>> &v, ll s,ll k){
    ll mini = LLONG_MAX/2; ll ans = -1;
    for(int i=1;i<=k;i++){
        ll dis = abs(v[i][0]-v[s][0])+abs(v[i][1]-v[s][1]);
        if(dis<mini){
            mini = dis;
            ans = i;
        }
    }
    return mini;
}
int main() {
    int tc;
    cin>>tc;
    while(tc--){
        ll n,k,s,d;
        cin>>n>>k>>s>>d;
        vector<vector<ll>> v(n+1);
        for(int i=1;i<=n;i++){
            ll x,y;
            cin>>x>>y;
            v[i] = {x,y};
        }
        ll real = abs(v[s][0]-v[d][0])+abs(v[s][1]-v[d][1]);
        ll s_near = solve(v,s,k);
        ll d_near = solve(v,d,k);
        ll ans = min(real,s_near+d_near);
        cout<<ans<<endl;
    }
}
