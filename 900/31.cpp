//https://codeforces.com/problemset/problem/1374/B
//Multiply by 2, divide by 6
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
        ll n;cin>>n;
        int cnt = 0,a=0;
        while(n%6==0) n/=6,cnt++;
        while(n%3==0) n/=3,a++;
        if(n==1){
            cout<<cnt+(a*2)<<endl;
        }
        else cout<<-1<<endl;
	}
}
