//https://codeforces.com/problemset/problem/1659/A
//Red Versus Blue
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
        int n,a,b; cin>>n>>a>>b;
        int groups = a/(b+1);
        int odd = a%(b+1);
        string s;
        while(n>0){
            for(int i=0;i<groups;i++){ s.push_back('R');n--;}
            if(odd){
                 s.push_back('R');
                 odd--;
                 n--;
            }
            if(b) s+="B",b--;
            n--;
        }
        cout<<s<<endl;
	}
}
