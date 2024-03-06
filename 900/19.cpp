//Odd Grasshopper
//https://codeforces.com/contest/1607/problem/B
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
        ll x,n;
        cin>>x>>n;
        ll ans = 0;
        if(n%4==0) ans+=0;
        else if(n%4==1) ans-=n;
        else if(n%4==2) ans+=1;
        else ans+=n+1;
        if(x%2==0) cout<<x+ans<<endl;
        else cout<<x-ans<<endl;
	}
    
    
}
