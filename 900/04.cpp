https://codeforces.com/contest/1875/problem/A
//Jellyfish and Undertale
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
		unsigned ll a,b,n;
		cin>>a>>b>>n;
		unsigned ll count = 0,sum = 0;
		for(int i =0;i<n;i++){
			int x; cin>>x;
			if(x>=a) count++;
			else sum+=x;
		}
		cout<<sum+b+(count*(a-1))<<endl;

	}
}
