//https://codeforces.com/problemset/problem/1715/B
//Beautiful Array
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
        debug(tc);
        ll n,k,b,s;
        cin>>n>>k>>b>>s;
        ll req = b*k;
        if(s<req or(k==1 and s!=b)){
            cout<<-1<<endl;
            continue;
        }
        ll first = min(req+k-1,s),left = s-first;
        ll zeroes = (k>1)?(left/(k-1))+(left%(k-1)!=0):0;
        if(zeroes>n-1) {
            cout<<-1<<endl;
            continue;
        }
        cout<<first<<" ";
        n--;
        while(n--){
            if(left>k-1) {
                cout<<k-1<<" ";
                left-=(k-1);
            }
            else {
                cout<<left<<" ";
                left = 0;
            }
        }
        cout<<endl;
	}
}
