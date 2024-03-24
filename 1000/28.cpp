//https://codeforces.com/problemset/problem/1374/C
//Move Brackets
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
        int n; cin>>n;
        string s;cin>>s;
        stack<char> st;
        for(int i=0;i<s.size();i++){
            if(s[i]==')' and st.size()>0) st.pop();
            else if(s[i]=='(') st.push(s[i]);
        }
        cout<<st.size()<<endl;
	}
}
