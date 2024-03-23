//https://codeforces.com/problemset/problem/1438/B
//Valerii Against Everyone
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
        int n;
        cin>>n;
        vector<int>x(n);
        for(int i=0;i<n;i++){
            cin>>x[i];
        }
        sort(x.rbegin(),x.rend());
        bool f = false;
        for(int i=0;i<n-1;i++){
            if(x[i]==x[i+1]) {
                f = true;
                break;
            }
        }
        cout<<(f?"YES":"NO")<<endl;
	}
}
