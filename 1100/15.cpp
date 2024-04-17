//https://codeforces.com/contest/1820/problem/B
//JoJo's Incredible Adventures
#include <bits/stdc++.h>
using namespace std;
#define ll long long 
#define gcd __gcd
#define ull unsigned long long
#define endl "\n"
#define pp pair<int,int>
#define ff first
#define ss second
#define mod 1000000007
#define sort(v) sort(v.begin(),v.end())
vector<int> read(int n){
	vector<int> arr(n);
	for(int i=0;i<n;i++) cin>>arr[i];
	return arr;
}
int solve(){
}
int main() {
	int tc;
	cin>>tc;
	while(tc--){
		string s; cin>>s;
        ll n = s.size();
        if(s.size()>1) s+=s;
        ll count = 0, maxi =0;bool flag = false;
        for(int i=0;i<s.size();i++){
            if(s[i]=='0') flag = true;
            if(s[i]=='1') count++;
            else{
                maxi = max(count,maxi);
                count = 0;
            }
        }
        ll x = n*n;
        if(!flag) cout<<x<<endl;
        else{
            ll ans = 0;
            ll a = maxi/2;
            ans = (maxi-a)*(1+a);
            cout<<ans<<endl;
        }
        
        
	}
    //1110
    //0111
    //1011
    //1101

    //1101
    //1110
    //0111
    //1011
    //1101
}
/*
11011101111
11101110111
11110111011
11111011101
11111101110
*/
//1110110110011111111000111
//9*1.8*2.7*3.6*4.5*5*.4*6
//4*1.3*2.2*3.1*4
