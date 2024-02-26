//Comparison String
//https://codeforces.com/problemset/problem/1837/B
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
        int n;string s;
        cin>>n>>s;
        int cnt=1, maxi = 1;
        for(int i=0;i<s.size()-1;i++){
            if(s[i]==s[i+1]) cnt++;
            else{
                maxi = max(maxi,cnt);
                cnt = 1;
            }
        }
        maxi = max(maxi,cnt);
        cout<<maxi+1<<endl;
	}
}
