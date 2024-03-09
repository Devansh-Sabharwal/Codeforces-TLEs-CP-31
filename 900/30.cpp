//01 Game
//https://codeforces.com/contest/1373/problem/B
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
        string s;
        cin>>s;
        int zero=0,one=0;
        for(auto x: s){
            if(x=='0') zero++;
            else one++;
        }
        int moves = min(zero,one);
        if(moves%2) cout<<"DA"<<endl;
        else cout<<"NET"<<endl;
	}
}
