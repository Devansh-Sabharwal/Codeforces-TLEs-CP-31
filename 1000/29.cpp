//https://codeforces.com/problemset/problem/1362/A
//Johnny and Ancient Computer
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
        ll a,b,ans=0;
        cin>>a>>b;
        if(a==b) ans = 0;
        else{
            if(a>b) swap(a,b);
            ll c = b/a;
            if(b%a!=0 or c%2!=0){ ans = -1;cout<<ans<<endl;continue;}
            while(c>=8 and c%8==0) c/=8,ans++;
            while(c>=4 and c%4==0) c/=4,ans++;
            while(c>=2 and c%2==0) c/=2,ans++;
            if(c!=1) ans = -1;
        }
        cout<<ans<<endl;
    }
}
