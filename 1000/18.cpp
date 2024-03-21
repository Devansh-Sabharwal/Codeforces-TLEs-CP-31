//https://codeforces.com/problemset/problem/1620/B
//Triangles on a Rectangle
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"
int main() {
	ll tc;
	cin>>tc;
	while(tc--){
        ll w,h;cin>>w>>h;
        ll n,area = 0;
        for(int j=0;j<4;j++){
            cin>>n;
            ll s,e;
            for(int i=0;i<n;i++){
                ll t; cin>>t;
                if(i==0) s = t;
                else if(i==n-1) e = t;
            }
            area = max(area, (j<2?h:w)*(e-s));
        }
        cout<<area<<endl;
	}
}
