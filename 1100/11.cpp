//https://codeforces.com/problemset/problem/1832/B
//Maximum Sum
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
        ll n,k; cin>>n>>k;
        ll sum = 0;
        vector<ll> a(n);
        for(auto &x: a){ cin>>x;sum+=x;}
        sort(a.begin(),a.end());
        vector<ll> pre,suff;pre = a,suff = a;
        for(int i=1;i<n;i++){
            pre[i] = pre[i-1]+a[i];
        }
        for(int i=n-2;i>=0;i--){
            suff[i] = suff[i+1]+a[i];
        }
        ll i=0,j=n-1; ll temp = sum,ans=-1;
        for(int m = 0;m<=k;m++){
            int id1 = 2*m-1;
            int j = k-m;
            int id2 = n-j;
            if(id1>=0) temp-=pre[id1];
            if(id2<n) temp-=suff[id2];
            ans = max(temp,ans);
            temp = sum;
        }
        cout<<ans<<endl;
        //10 11 12 13 15 22
        //1 2 5 6 10
	}
}
