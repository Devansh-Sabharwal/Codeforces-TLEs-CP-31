//https://codeforces.com/problemset/problem/1690/D
//Black and White Stripe
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
        int n,k; cin>>n>>k;
        string s;
        cin>>s;
        int b = 0 ,ans = INT_MAX;
        int i=0,j=0;
        for(j=0;j<k;j++){
            if(s[j]=='B') b++;
        }
        ans = min({max(0,k-b),ans});
        for(i=0;i<n-k;i++){
            if(s[j]=='B') b++;
            if(s[i]=='B') b--;
            ans = min({max(0,k-b),ans});
            j++;
        }
        cout<<ans<<endl;
	}
}

