//https://codeforces.com/problemset/problem/1471/A
// Strange Partition
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
        ll n , x;
        cin>>n>>x; 
        ll sum = 0;ll mini = 0;
        for(int i=0;i<n;i++){
            ll a; cin>>a;
            sum+=a;
            if(a%x==0) mini+=(a/x);
            else mini+=(a/x)+1;
        }
        if(sum%x==0) cout<<sum/x<<" ";
        else cout<<(sum/x)+1<<" ";
        cout<<mini<<endl;
	}

}
