//https://codeforces.com/problemset/problem/1913/B
//Swap and Delete
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
		int z=0, o=0;
		for(auto x: s){
			if(x=='0')z++;
			else o++;
		}
		int n = s.size();
		for(int i=0;i<s.size();i++){
			if(s[i]=='0'){
				if(o>0)o--,n--;
				else break;
			}
			else{
				if(z>0) z--,n--;
				else break;
			}
		}
		cout<<n<<endl;
	}
}
