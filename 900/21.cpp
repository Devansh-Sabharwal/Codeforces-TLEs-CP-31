//Make it Divisible by 25
//https://codeforces.com/problemset/problem/1593/B
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
        ll n;
        cin>>n;
        string s = to_string(n);
        ll count = 0,ans = INT_MAX;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='0'){
                i--;
                while(i>=0 and( s[i]!='5' and s[i]!='0')){
                    count++;
                    i--;
                }
                if(i>=0 and (s[i]=='5' or s[i]=='0')){
                    ans = min(ans,count);
                }
                break;
            }
            else count++;
        }
        count = 0;
        for(int i=s.size()-1;i>=0;i--){
            if(s[i]=='5'){
                i--;
                while(i>=0 and( s[i]!='2' and s[i]!='7')){
                    count++;
                    i--;
                }
                if(i>=0 and (s[i]=='2' or s[i]=='7')){
                    ans = min(ans,count);
                }
                break;
            }
            else count++;
        }
        cout<<ans<<endl;
	}
}
