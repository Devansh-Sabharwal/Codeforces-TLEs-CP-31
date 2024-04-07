//https://codeforces.com/problemset/problem/1842/B
//Tenzing and Books
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
        int n,x;
        cin>>n>>x;
        vector<int> a(n);
        int i=0,j=0,k=0,curr = 0;
        for(int i=0;i<3;i++){
            for(auto &e: a) cin>>e;
            for(int j=0;j<n;j++){
                if((a[j]|x)!=x) break;
                curr |= a[j];
            }
        }
        cout<<(curr==x?"YES":"NO")<<endl;
	}
}
