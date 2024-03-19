//Traffic Light
//https://codeforces.com/problemset/problem/1744/C#include <bits/stdc++.h>
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
        int n;char c;
        cin>>n>>c;
        string s;
        cin>>s;
        if(c=='g'){
            cout<<0<<endl;
            continue;
        }
        s+=s;
        int ans = 0;
        stack<int> st;
        for(int i=0;i<s.size();i++){
            if(s[i]=='g'){
                while(st.size()){
                    int id = st.top();st.pop();
                    ans = max(i-id,ans);
                }
            }
            else if(s[i]==c) st.push(i);
        }
        cout<<ans<<endl;
	}
}
